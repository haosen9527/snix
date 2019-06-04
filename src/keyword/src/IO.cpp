#include <iostream>

int main()
{
    std::cout<<"please input number"<<std::endl;
    long double number1 = 0,number2 = 0;
    std::cin >> number1 >> number2;
    std::cout << "----------------------" << std::endl;
    std::cout << "sum:" << number1+number2 << std::endl;
    return 0;
}
