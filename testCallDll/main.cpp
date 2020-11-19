#include <QCoreApplication>
#include "libhk.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    LibHK libHK;
    int localAdd = libHK.add(1,2);
    std::cout<<localAdd<<std::endl;
    return a.exec();
}
