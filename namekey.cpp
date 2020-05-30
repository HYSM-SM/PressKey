#include "namekey.h"

//инициализация кнопок идет с левого верхнего угла клавиатуры в правый нижний
void KeyBoard::namekey(Key &key)
{
    key.FillKey(ui->ESC, 0x1B, 0);
    key.FillKey(ui->F1, 0x70, 1);
    key.FillKey(ui->F2, 0x71, 2);
    key.FillKey(ui->F3, 0x72, 3);
    key.FillKey(ui->F4, 0x73, 4);
    key.FillKey(ui->F5, 0x74, 5);
    key.FillKey(ui->F6, 0x75, 6);
    key.FillKey(ui->F7, 0x76, 7);
    key.FillKey(ui->F8, 0x77, 8);
    key.FillKey(ui->F9, 0x78, 9);
    key.FillKey(ui->F10, 0x79, 10);
    key.FillKey(ui->F11, 0x7A, 11);
    key.FillKey(ui->F12, 0x7B, 12);
    key.FillKey(ui->PRINT_SCREEN, 0x2C, 13);
    key.FillKey(ui->SCROLL_LOCK, 0x91, 14);
    key.FillKey(ui->PAUSE_BREAK, 0x13, 15);
    key.FillKey(ui->TILDE, 0xC0, 16);
    key.FillKey(ui->KEY_1, 0x31, 17);
    key.FillKey(ui->KEY_2, 0x32, 18);
    key.FillKey(ui->KEY_3, 0x33, 19);
    key.FillKey(ui->KEY_4, 0x34, 20);
    key.FillKey(ui->KEY_5, 0x35, 21);
    key.FillKey(ui->KEY_6, 0x36, 22);
    key.FillKey(ui->KEY_7, 0x37,23);
    key.FillKey(ui->KEY_8, 0x38, 24);
    key.FillKey(ui->KEY_9, 0x39,25);
    key.FillKey(ui->KEY_0, 0x30,26);
    key.FillKey(ui->KEY_DASH, 0xBD,27);
    key.FillKey(ui->KEY_EQUALS, 0xBB, 28);
    key.FillKey(ui->BACK_SPACE, 0x8, 29);
    key.FillKey(ui->INSERT, 0x2D, 30);
    key.FillKey(ui->HOME, 0x24, 31);
    key.FillKey(ui->PAGE_UP, 0x21, 32);
    key.FillKey(ui->NUM_LOCK, 0x90, 33);
    key.FillKey(ui->DIVIDE, 0x6F, 34);
    key.FillKey(ui->MULTIPLY, 0x6A, 35);
    key.FillKey(ui->SUBTRACT, 0x6D, 36);
    key.FillKey(ui->TAB, 0x9, 37);
    key.FillKey(ui->Q, 0x51, 38);
    key.FillKey(ui->W, 0x57, 39);
    key.FillKey(ui->E, 0x45, 40);
    key.FillKey(ui->R, 0x52, 41);
    key.FillKey(ui->T, 0x54, 42);
    key.FillKey(ui->Y, 0x59, 43);
    key.FillKey(ui->U, 0x55, 44);
    key.FillKey(ui->I, 0x49, 45);
    key.FillKey(ui->O, 0x4F, 46);
    key.FillKey(ui->P, 0x50, 47);
    key.FillKey(ui->BRACKET_LEFT, 0xDB, 48);
    key.FillKey(ui->BRACKET_RIGHT, 0xDD, 49);
    key.FillKey(ui->BACK_SLASH, 0xDC, 50);
    key.FillKey(ui->DEL, 0x2E, 51); //имя DEL, а не DELETE из-за того что в библиотеке windows.h уже есть переменная с именем DELETE
    key.FillKey(ui->END, 0x23, 52);
    key.FillKey(ui->PAGE_DOWN, 0x22, 53);
    key.FillKey(ui->NUM_7, 0x67, 54);
    key.FillKey(ui->NUM_8, 0x68, 55);
    key.FillKey(ui->NUM_9, 0x69, 56);
    key.FillKey(ui->ADD, 0x6B, 57);
    key.FillKey(ui->CAPS_LOCK, 0x14, 58);
    key.FillKey(ui->A, 0x41, 59);
    key.FillKey(ui->S, 0x53, 60);
    key.FillKey(ui->D, 0x44, 61);
    key.FillKey(ui->F, 0x46, 62);
    key.FillKey(ui->G, 0x47, 63);
    key.FillKey(ui->H, 0x48, 64);
    key.FillKey(ui->J, 0x4A, 65);
    key.FillKey(ui->K, 0x4B, 66);
    key.FillKey(ui->L, 0x4C, 67);
    key.FillKey(ui->SEMICOLON , 0xBA, 68);
    key.FillKey(ui->APOSTROPHE, 0xDE, 69);
    key.FillKey(ui->RETURN, 0xD, 70);
    key.FillKey(ui->NUM_4, 0x64, 71);
    key.FillKey(ui->NUM_5, 0x65, 72);
    key.FillKey(ui->NUM_6, 0x66, 73);
    key.FillKey(ui->LSHIFT, 0xA0, 74);
    key.FillKey(ui->Z, 0x5A, 75);
    key.FillKey(ui->X, 0x58, 76);
    key.FillKey(ui->C, 0x43, 77);
    key.FillKey(ui->V, 0x56, 78);
    key.FillKey(ui->B, 0x42, 79);
    key.FillKey(ui->N, 0x4E, 80);
    key.FillKey(ui->M, 0x4D, 81);
    key.FillKey(ui->COMMA, 0xBC, 82);
    key.FillKey(ui->DOT, 0xBE, 83);
    key.FillKey(ui->SLASH, 0xBF, 84);
    key.FillKey(ui->RSHIFT, 0xA1, 85);
    key.FillKey(ui->CURSOR_UP, 0x26, 86);
    key.FillKey(ui->NUM_1, 0x61, 87);
    key.FillKey(ui->NUM_2, 0x62, 88);
    key.FillKey(ui->NUM_3, 0x63, 89);
    key.FillKey(ui->ENTER, 0xD, 90); //0x11C
    key.FillKey(ui->LCTRL, 0xA2, 91);
    key.FillKey(ui->WIN, 0x5B, 92);
    key.FillKey(ui->LALT, 0xA4, 93);
    key.FillKey(ui->SPACE, 0x20, 94);
    key.FillKey(ui->RALT, 0xA5, 95);
    key.FillKey(ui->CONTEXT_MENU, 0x5D, 96);
    key.FillKey(ui->RCTRL, 0xA3, 97);
    key.FillKey(ui->CURSOR_LEFT, 0x25, 98);
    key.FillKey(ui->CURSOR_DOWN, 0x28, 99);
    key.FillKey(ui->CURSOR_RIGHT, 0x27, 100);
    key.FillKey(ui->NUM_0, 0x60, 101);
    key.FillKey(ui->NUM_DOT, 0x6E, 102);
}

void KeyBoard::CheckPressKey(int codekey, Key &key)
{
    for(int i = 0; i < 103; i++)
    {
        if(codekey == key.GetCode(i))
        {
            key.ChangeColorMode(i, 1);
            key.SetCodePresskey(key.GetCode(i));
            break;
        }
    }
}

void KeyBoard::PrintCodePressKey(int codekey)
{
   ui->PrintCodeKey->setText("CodeKey: " + QString::number(codekey, 16).toUpper()); //вывод кода кнопок в 16-чном виде
}
