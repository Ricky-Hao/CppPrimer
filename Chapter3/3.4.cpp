#include <iostream>
#include <string>
void main()
{
    std::string a, b;
    std::getline(std::cin, a);
    std::getline(std::cin, b);
    if(a==b)
    {
        std::cout << "Equal." << std::endl;
    }
    else
    {
        if(a<b)
        {
            std::cout << b;
        }
        else
        {
            std::cout << a;
        }
    }
}