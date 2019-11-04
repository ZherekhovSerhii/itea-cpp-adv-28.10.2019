#include "MainWindow.h"

namespace C1
{

MainWindow::MainWindow(QWidget * parent)
    : QWidget{parent},
      menuBar{new QMenuBar{}},
      gbxList{new QGroupBox{"Пользователи"}},
      listMembers{new QListWidget},
      gbxChat{new QGroupBox{"Чат с..."}},
      plainTxtEditChat{new QPlainTextEdit},
      sendFileBtn{new QPushButton{"Отправить файл"}},
      lineEditMsg{new QLineEdit},
      sendMsgBtn{new QPushButton{"Отправить сообщение"}},
      statusBar{new QStatusBar}
{
    QVBoxLayout * vlayoGeneric{new QVBoxLayout{this}};
    vlayoGeneric->setMargin(0);
    initMenuBar();
    vlayoGeneric->addWidget(menuBar);

    QHBoxLayout * hlayoGeneric{new QHBoxLayout{this}};
    hlayoGeneric->addWidget(gbxList);
    hlayoGeneric->addWidget(gbxChat);

    vlayoGeneric->addLayout(hlayoGeneric);
    vlayoGeneric->addWidget(statusBar);



    QVBoxLayout * vlayoList{new QVBoxLayout{this}};
    initListMembers();
    vlayoList->addWidget(listMembers);
    gbxList->setLayout(vlayoList);


    QVBoxLayout * vlayoChat{new QVBoxLayout{this}};
    vlayoChat->addWidget(plainTxtEditChat);

    QHBoxLayout * hlayoChatControls{new QHBoxLayout{this}};
    sendFileBtn->setFixedWidth(80);
    hlayoChatControls->addWidget(sendFileBtn);
    hlayoChatControls->addWidget(lineEditMsg);
    sendMsgBtn->setFixedWidth(100);
    hlayoChatControls->addWidget(sendMsgBtn);

    vlayoChat->addLayout(hlayoChatControls);
    gbxChat->setLayout(vlayoChat);
}

void MainWindow::initMenuBar()
{
    QMenu * pmnu = new QMenu("&Файл") ;
    pmnu->addAction("&Открыть соединение");
    pmnu->addSeparator();
    pmnu->addAction("&Выход");
    menuBar->addMenu(pmnu);
}

void MainWindow::initListMembers()
{
    QStringList      lst;
    lst << "Богдан Шамборский"
        << "Алексей Шишко"
        << "Юрий Саяпин"
        << "Александр Иванов"
        << "Сергей Жерехов"
        << "Максим Ревич"
        << "Руслан Капустин"
        << "Богдан Хцинский";
    foreach(QString str, lst)
        new QListWidgetItem(str, listMembers);
}

} //C1
