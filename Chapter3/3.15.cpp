#include <iostream>
#include <string>
#include <vector>
void main()
{
    std::vector<string> l;
    string i;
    while(std::cin>>i)
        l.push_back(i);
    for(auto c:l)
    {
        std::cout << c << std::endl;
    }
}