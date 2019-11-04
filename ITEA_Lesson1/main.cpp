#include <QApplication>

#include "MainWindow.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    C1::MainWindow * window{new C1::MainWindow{}};
    window->show();
    return a.exec();
}

