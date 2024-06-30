#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_QQAplication.h"

class QQAplication : public QMainWindow
{
    Q_OBJECT

public:
    QQAplication(QWidget *parent = nullptr);
    ~QQAplication();

private:
    Ui::QQAplicationClass ui;
};
