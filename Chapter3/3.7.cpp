#include <iostream>
#include <string>
void main()
{
    std::string s;
    getline(std::cin, s);
    for(char c :s)
    {
        c = 'X';
    }
    std::cout << s << std::endl;
}