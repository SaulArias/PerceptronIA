#ifndef PERCEPTRON_H
#define PERCEPTRON_H

#include <QMainWindow>

namespace Ui {
class Perceptron;
}

class Perceptron : public QMainWindow
{
    Q_OBJECT

public:
    explicit Perceptron(QWidget *parent = 0);
    ~Perceptron();

private:
    Ui::Perceptron *ui;
};

#endif // PERCEPTRON_H
