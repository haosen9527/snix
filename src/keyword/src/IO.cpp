#include <iostream>

typedef float snixFloat;
int main()
{
    std::cout<<"please input number"<<std::endl;
    long double number1 = 0,number2 = 0;
    std::cin >> number1 >> number2;
    std::cout << "----------------------" << std::endl;
    std::cout << "sum:" << number1+number2 << std::endl;
    std::cerr << number1 << std::endl;

    std::cout << "Size of char :" << sizeof(char) << std::endl;
    std::cout << "Size of int :" << sizeof(int) << std::endl;
    std::cout << "Size of short int :" << sizeof(short int) << std::endl;
    std::cout << "Size of long int :" << sizeof(long int) << std::endl;
    std::cout << "Size of float :" << sizeof(float) << std::endl;
    std::cout << "Size of double :" << sizeof(double) << std::endl;
    std::cout << "Size of wchar_t:" << sizeof(wchar_t) << std::endl;

    snixFloat snixnumber=0.99;
    std::cout << "snixnumber:" << snixnumber << std::endl;
    register int resNaN = 9;
    std::cout << "AlloC:" << resNaN << std::endl;
    extern int resNaN_;
    auto int tt;
    return 0;
}
