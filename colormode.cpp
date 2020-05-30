#include "colormode.h"

void KeyBoard::ChangeAllColorOnGrey()
{
    for(int i = 0; i < 103; i++)
    {
        key.ChangeColorMode(i, 0);
    }
    BlockClearKeyBoard = true; //включает блокировку на изменениe цвета
}

void  KeyBoard::ChangeAllColorOnOWGPBR() //Orange White Green Pink Blue Red
{
    key.ChangeColorMode(0, 2);
    BlockClearKeyBoard = true;
}

void KeyBoard::ChangeColorButton()
{
    for(int i = 0; i < 103; i++)
    {
        key.ChangeColorMode(i, 0);
    }
    BlockClearKeyBoard = false; //отключает блокировку на изменения цвета
}


