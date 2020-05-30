#include "presskey.h"

void KeyBoard::KeyEvent()
{
    for(int i = 0; i < 103; i++)
    {
        if(GetAsyncKeyState(key.GetCode(i)))
        {
            if(!BlockClearKeyBoard)
            {
                if(i == 70) //Был нажат enter(изменяет цвет кнопок enter и return). Функция GetAsyncKeyState может проверить только enter,
                {           //return она воспринимает как enter.
                    key.ChangeColorMode(90, 1);
                    key.SetCodePresskey(key.GetCode(90));
                }
                key.ChangeColorMode(i, 1);
                key.SetCodePresskey(key.GetCode(i));
            }
            PrintCodePressKey(key.GetCode(i));
            break;
        }
    }

    QTimer::singleShot(10, this, SLOT(KeyEvent()));
}
