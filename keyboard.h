#ifndef KEYBOARD_H
#define KEYBOARD_H

#include <QMainWindow>
#include "key.h"
#include <QTimer>
#include <QShortcut>
#include <windows.h>

namespace Ui {
class KeyBoard;
}

class KeyBoard : public QMainWindow
{
    Q_OBJECT
public:
    explicit KeyBoard(QWidget *parent = nullptr);
    bool BlockClearKeyBoard; //Блокировка изменения цвета кнопок
    HWND WindowKeyBoard;
    HWND OtherWindow;
    DWORD ThreadIDOtherWindow;
    DWORD ThreadIDKeyBoard;

    ~KeyBoard();

private slots:
        void namekey(Key &key);                     //заполнение всех кнопок информацией(код,индекс)

        void CheckPressKey(int codekey, Key &key);  //Проверка кода нажатой кнопки с кодом кнопок на клавиатуре и изменение цвета при совпадении

        void PrintCodePressKey(int codekey);        //Вывод кода нажатой кнопки

        void ClearKeyBoard();                       //Изменение цвета кнопки на стандартный(Серый)

        void ChangeAllColorOnOWGPBR();              //Изменение цвета всех кнопок на Оранжевый,Белый,Зелёный,Розовый,Голубой,Красный

        void ChangeAllColorOnGrey();                //Изменение цвета всех кнопок на стандартный(Серый)

        void ChangeColorButton();                   //Изменение цвета всех кнопок на стандартный(Серый).При нажатии на кнопку она меняет цвет

        void KeyEvent();                            //Обработка нажатий на кнопки

        void CheckWindow();                         //Проверка ID активного окна

        void CheckClickOnKey();                     //Проверка клика мышки по кнопке

private:
    Ui::KeyBoard *ui;
    Key key;              //Работа с клавишами
    //Горячие клавиши
    QShortcut *keyCtrl_1; //Изменение цвета всех кнопок на постоянный серый.Активируется при сочетании клавиш CTRL + 1
    QShortcut *keyCtrl_2; //Изменение цвета всех кнопок на постоянный OWGPBR.Активируется при сочетании клавиш CTRL + 2
    QShortcut *keyCtrl_3; //Изменение цвета всех кнопок на серый, при нажатии на кнопку она меняет цвет.Активируетсяпри сочетании клавиш CTRL + 3
    QTimer *TimerCheckClickOnButton; //таймер для проверки клика мышки по кнопкам
};

#endif // KEYBOARD_H
