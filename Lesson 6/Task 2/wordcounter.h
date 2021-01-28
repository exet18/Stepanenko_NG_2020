#ifndef WORDCOUNTER_H
#define WORDCOUNTER_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class wordcounter; }
QT_END_NAMESPACE

class wordcounter : public QMainWindow
{
    Q_OBJECT

public:
    wordcounter(QWidget *parent = nullptr);
    ~wordcounter();

private slots:

    void textProcessing();

private:
    Ui::wordcounter *ui;
};
#endif // WORDCOUNTER_H
