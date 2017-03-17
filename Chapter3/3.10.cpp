#include <iostream>
#include <string>
void main()
{
    std::string s, r;
    getline(std::cin, s);
    for (auto c:s)
    {
        if(!ispunct(c))
        {
            r += c;
        }
    }
    std::cout << r;
}