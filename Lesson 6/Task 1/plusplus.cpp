#include "plusplus.h"
#include "ui_plusplus.h"

plusplus::plusplus(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::plusplus)
{
    ui->setupUi(this);

    connect (ui->pushButton, &QPushButton::clicked, this, &plusplus::Resultat);
}

plusplus::~plusplus()
{
    delete ui;
}

void plusplus::Resultat()
{
    int first,second,result;

    QString firstLE = ui->lineEdit->text();
    first = firstLE.toInt();

    QString secondLE = ui->lineEdit_2->text();
    second = secondLE.toInt();

    result = first + second;

    ui->lineEdit_3->setText(QString::number(result));
}

