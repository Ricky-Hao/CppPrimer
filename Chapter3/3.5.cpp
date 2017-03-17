#include <iostream>
#include <string>
void main()
{
    std::string a, sum;
    while(std::cin>>a)
    {
        sum += a;
    }
    std::cout << sum;
}