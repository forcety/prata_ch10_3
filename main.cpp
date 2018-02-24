#include <QCoreApplication>
#include <iostream>
#include "golf.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    std::cout << "Start program\n";

    golf ann;
    setgolf(ann, "Ann Birdfree", 24);

    return a.exec();
}
