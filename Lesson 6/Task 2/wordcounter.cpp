#include "wordcounter.h"
#include "ui_wordcounter.h"

wordcounter::wordcounter(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::wordcounter)
{
    ui->setupUi(this);
    connect(ui->userInput, &QTextEdit::textChanged,this, &wordcounter::textProcessing);
    ui->counter->setReadOnly(true);
}

wordcounter::~wordcounter()
{
    delete ui;
}

void wordcounter::textProcessing()
{
    ui->counter->setValue(ui->userInput->toPlainText().length());
}

