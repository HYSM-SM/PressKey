#include "clickonbutton.h"

void KeyBoard::CheckClickOnKey()
{
    for(int i = 0; i < 103; i++)
    {
        if(key.CheckClickOnButton(i))
        {
            TimerCheckClickOnButton->stop();                    //Что бы функция заново не вызвалась через  50 мсек
            SetFocus(OtherWindow);                              //Изменяю фокус ввода с клавиатуры на второе окно
            keybd_event(key.GetCode(i), 0, 0, 0);               //Опускаю кнопку вниз
            keybd_event(key.GetCode(i), 0, KEYEVENTF_KEYUP, 0); //Поднимаю кнопку вверх
            Sleep(120);                                         //Время для поднятия пользователем кнопки вверх
            TimerCheckClickOnButton->start();
            break;
        }
    }
}
//Commets
