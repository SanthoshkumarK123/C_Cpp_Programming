#include <iostream>
/*
    This files is used to learn the data types in c++
*/
int main() {
    std::cout << "Data Types in c++" << std::endl;
    int num1,num2,sumOfnum;
    std::cout << "Enter the value of first number :" << std::endl;
    std::cin >> num1;
    std::cout << "Enter the value of second number :" << std::endl;
    std::cin >> num2;
    sumOfnum = num1 + num2;
    std::cout << "The sum of two numbers are :" << sumOfnum << std::endl;
    return 0;
}