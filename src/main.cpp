#include <stdio.h>
#include <iostream>

int main()
{
    unsigned long long int sample = 0b01;
    for(int i {0};i!=64;i++)
    {
        std::cout << "int: " << sample << std::endl;
        sample = sample << 1;
    }
    for(int i {0};i!=0;i--)
    {
        std::cout << "int: " << sample << std::endl;
        sample = sample >> 1;
    }
    return 0;
}