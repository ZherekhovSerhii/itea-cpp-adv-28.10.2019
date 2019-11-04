#pragma once

#include<QtWidgets>

namespace C1
{

class MainWindow : public QWidget
{
    Q_OBJECT
public:
    explicit MainWindow(QWidget * parent = nullptr);
    ~MainWindow() override = default;

private:
    void initMenuBar();
    void initListMembers();

    QMenuBar * menuBar;
    QGroupBox * gbxList;
    QListWidget * listMembers;
    QGroupBox * gbxChat;
    QPlainTextEdit * plainTxtEditChat;
    QPushButton * sendFileBtn;
    QLineEdit * lineEditMsg;
    QPushButton * sendMsgBtn;
    QStatusBar * statusBar;
};

} //C1
