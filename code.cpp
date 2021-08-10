#include<iostream>
#include<Windows.h>

int main()
{
    const int size = 256;
    unsigned long str_size = size;
    char id[size];

    GetComputerNameA(id, &str_size);
    std::cout << id << std::endl;
    
    std::cin.get();
    return 0;
}
