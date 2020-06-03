#ifndef MAIN2_H
#define MAIN2_H

#include <QDialog>

namespace Ui {
class Main2;
//Main2 *o;
}

class Main2 : public QDialog
{
    Q_OBJECT

public:
    explicit Main2(QWidget *parent = nullptr);
    ~Main2();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Main2 *ui;
};

#endif // MAIN2_H
