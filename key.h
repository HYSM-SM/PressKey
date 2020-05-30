#ifndef KEY_H
#define KEY_H

#include <QMainWindow>
#include <QPushButton>
#include <vector>

class Key
{
private:
    QPushButton *button[103];       //хранение всех кнопок
    std::vector<int> code;          //хранение кодов всех кнопок
    std::vector<int> CodePressKey;  //для добавление кода кнопки при нажатии на нее

public:
    void FillKey(QPushButton *current_button,int code,int index); //заполнение button и code
    void ChangeColorMode(int index,int mode);                     //изменение цвета кнопок
    int  GetCode(int index);                                      //получение кода кнопки по индексу
    int GetCodePresskey(int index);                               //плучение кода нажатой уже кнопки по индексу
    void SetCodePresskey(int codekey);                            //заполнение CodePressKey
    int SizeCodePressKey();                                       //Выдача размера вектора CodePressKey
    void DeleteBeginCodePressKey();                               //Удаление первого элемента вектора CodePressKey
    bool CheckClickOnButton(int index);                           //Проверка клика на кнопку по индексу
};
#endif // KEY_H


