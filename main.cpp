#include "perceptron.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Perceptron w;
    w.show();

    return a.exec();
}
