#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_WindowSizeResizeDemo.h"

class WindowSizeResizeDemo : public QMainWindow
{
    Q_OBJECT

public:
    WindowSizeResizeDemo(QWidget *parent = Q_NULLPTR);

private:
    Ui::WindowSizeResizeDemoClass ui;
};
