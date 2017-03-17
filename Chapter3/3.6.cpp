#include <iostream>
#include <string>
void main()
{
    std::string s;
    getline(std::cin, s);
    for(auto &c :s)
    {
        c = 'X';
    }
    std::cout << s << std::endl;
}