#ifndef PLUSPLUS_H
#define PLUSPLUS_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class plusplus; }
QT_END_NAMESPACE

class plusplus : public QMainWindow
{
    Q_OBJECT

public:
    plusplus(QWidget *parent = nullptr);
    ~plusplus();
private slots:

    void Resultat();

private:
    Ui::plusplus *ui;
};
#endif // PLUSPLUS_H
