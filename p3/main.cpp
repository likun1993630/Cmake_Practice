#include <iostream>
#include "sum.h"

int main()
{
    int Num1 = 1;
    int Num2 = 2;
    int iRet = 0;

    iRet = Sum(Num1, Num2);
    std::cout << "Num1 + Num2 = " << iRet << std::endl;
    return 0;
}