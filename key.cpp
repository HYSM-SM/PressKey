#include "key.h"

void Key::FillKey(QPushButton *current_button, int code, int index)
{
    if(index < 0 || index > 103)   //проверка выхода за границу вектора
    {
        return;
    }
    else
    {
        button[index] = current_button;
        this->code.push_back(code);
    }
}

void Key::ChangeColorMode(int index, int mode)
{

    //mode - цветовой режим отображения кнопок
    //0 все кнопки подсвечиваются серым цветом
    //1 каждая кнопка подсвечивается отдельно
    //2 загорание всех кнопок

    if(mode == 0)
    {
        button[index]->setStyleSheet("background-color: rgb(0, 0, 0);color: rgb(185, 185, 185);"); //серый
    }

    if(mode == 1)
    {
    if(index <= 15)
     button[index]->setStyleSheet("background-color: rgb(0, 0, 0);color: rgb(255, 140, 0);");      //оранжевый
    else if( index >= 16 && index <= 36)
     button[index]->setStyleSheet("background-color: rgb(0, 0, 0);color: rgb(224, 255, 255);");    //белый
    else if(index >= 37 && index <= 57)
     button[index]->setStyleSheet("background-color: rgb(0, 0, 0);color: rgb(0, 245, 0);");        //зелёный
    else if(index >= 58 && index <= 73)
     button[index]->setStyleSheet("background-color: rgb(0, 0, 0);color: rgb(255, 3, 255);");      //розовый
    else if(index >= 74 && index <= 90)
     button[index]->setStyleSheet("background-color: rgb(0, 0, 0);color: rgb(30, 10, 255);");      //голубой
    else if(index >= 91 && index <= 102)
     button[index]->setStyleSheet("background-color: rgb(0, 0, 0);color:rgb(255, 0, 0);");         //красный
    }

    if(mode == 2)
    {
        for(int i = 0; i < 103; i++)
        {
            if(i <= 15)
             button[i]->setStyleSheet("background-color: rgb(0, 0, 0);color: rgb(255, 140, 0);");
            else if( i >= 16 && i <= 36)
             button[i]->setStyleSheet("background-color: rgb(0, 0, 0);color: rgb(224, 255, 255);");
            else if(i >= 37 && i <= 57)
             button[i]->setStyleSheet("background-color: rgb(0, 0, 0);color: rgb(0, 245, 0);");
            else if(i >= 58 && i <= 73)
             button[i]->setStyleSheet("background-color: rgb(0, 0, 0);color: rgb(255, 3, 255);");
            else if(i >= 74 && i <= 90)
             button[i]->setStyleSheet("background-color: rgb(0, 0, 0);color: rgb(30, 10, 255);");
            else if(i >= 91 && i <= 103)
             button[i]->setStyleSheet("background-color: rgb(0, 0, 0);color:rgb(255, 0, 0);");
        }
    }
}

int Key::GetCode(int index)
{
    return code[index];
}

int Key::GetCodePresskey(int index)
{
    if(CodePressKey.empty())                      //
        return 0;                                 //
    if(index < 0 || index > CodePressKey.size())  //проверка выхода за границу вектора
        return -1;                                //
    for(int i = 0; i < code.size(); i ++)
    {
        if(CodePressKey[index] == code[i])
            return i;
    }
}

void Key::SetCodePresskey(int codekey)
{
    for(int i = 0; i < CodePressKey.size(); i++) //предотвращение добавления одной и той же кнопки
    {
        if(CodePressKey[i] == codekey)
            return;
    }
   CodePressKey.push_back(codekey);  //добавление кода кнопки в конец вектора
}

int Key::SizeCodePressKey()
{
    return  CodePressKey.size();
}

void Key::DeleteBeginCodePressKey()
{
    if(CodePressKey.empty()) //проверка размера массива
        return;
    CodePressKey.erase(CodePressKey.begin());
}

bool Key::CheckClickOnButton(int index)
{
    if(index < 0 || index > 103)
        return false;

    if(button[index]->isDown())
        return true;
    else
        return false;
}


