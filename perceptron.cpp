#include "perceptron.h"
#include "ui_perceptron.h"

Perceptron::Perceptron(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Perceptron)
{
    ui->setupUi(this);
}

Perceptron::~Perceptron()
{
    delete ui;
}
