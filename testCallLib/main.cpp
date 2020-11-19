#include <iostream>
#include "libhk.h"
#include <unistd.h>


using namespace std;

int main()
{
    cout << "Hello World!" << endl;
    LibHK libhk;
    int localAdd = libhk.add(1,5);
    std::cout<<localAdd<<std::endl;

}
