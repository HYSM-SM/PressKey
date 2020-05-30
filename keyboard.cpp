#include "keyboard.h"
#include "ui_keyboard.h"

///инициализация конструктора класса
KeyBoard::KeyBoard(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::KeyBoard)
{
    ui->setupUi(this);

    namekey(key); //заполняет все кнопки данными

    setWindowFlag(Qt::WindowStaysOnTopHint); //вывод окна поверх всех остальных

    QTimer::singleShot(500, this, SLOT(ClearKeyBoard())); //таймер для очистки цвета кнопок
    QTimer::singleShot(10, this, SLOT(KeyEvent()));  //таймер для проверки нажатия кнопок
    QTimer::singleShot(10, this, SLOT(CheckWindow()));//таймер для проверки ID активного окна
    TimerCheckClickOnButton = new QTimer(this);
    connect(TimerCheckClickOnButton, SIGNAL(timeout()), this, SLOT(CheckClickOnKey()));
    TimerCheckClickOnButton->start(50);

    key.ChangeColorMode(33, 1); //изменяет цвет кнопки NumLock на белый при включении программы

    BlockClearKeyBoard = false;

    keyCtrl_1 = new QShortcut(this);
    keyCtrl_1->setKey(Qt::CTRL + Qt::Key_1);
    connect(keyCtrl_1, SIGNAL(activated()), this, SLOT(ChangeAllColorOnGrey()));

    keyCtrl_2 = new QShortcut(this);
    keyCtrl_2->setKey(Qt::CTRL + Qt::Key_2);
    connect(keyCtrl_2, SIGNAL(activated()), this, SLOT(ChangeAllColorOnOWGPBR()));

    keyCtrl_3 = new QShortcut(this);
    keyCtrl_3->setKey(Qt::CTRL + Qt::Key_3);
    connect(keyCtrl_3, SIGNAL(activated()), this, SLOT(ChangeColorButton()));
}


void KeyBoard::CheckWindow()
{
    WindowKeyBoard = FindWindowA(NULL, "KeyBoard");
    if(WindowKeyBoard != GetForegroundWindow())
    {
        OtherWindow = GetForegroundWindow();
        ThreadIDOtherWindow = GetWindowThreadProcessId(GetForegroundWindow(), 0);
        ThreadIDKeyBoard = GetWindowThreadProcessId(WindowKeyBoard, 0);
        AttachThreadInput(ThreadIDKeyBoard, ThreadIDOtherWindow, TRUE);
    }

    QTimer::singleShot(10, this, SLOT(CheckWindow()));
}

// такая реализация сделана для того что бы цвет кнопок изменялся от первой нажатой кнопки до последней, постепенно.
void KeyBoard::ClearKeyBoard()
{
    if(!BlockClearKeyBoard)
    {
    key.ChangeColorMode(key.GetCodePresskey(0), 0);
    if(key.GetCodePresskey(0) == 70)                //Так сделано из-за того что у enter и return один код на двоих
        key.ChangeColorMode(90, 0);
    key.DeleteBeginCodePressKey();
    }

    QTimer::singleShot(500, this, SLOT(ClearKeyBoard()));
}

KeyBoard::~KeyBoard()
{
    delete ui;
}       

