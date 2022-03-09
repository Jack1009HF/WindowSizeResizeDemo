#include "WindowSizeResizeDemo.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    WindowSizeResizeDemo w;
    w.show();
    return a.exec();
}
