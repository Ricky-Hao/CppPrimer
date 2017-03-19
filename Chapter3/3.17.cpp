#include <iostream>
#include <vector>
#include <string>
void main()
{
    std::vector<std::string> word_list;
    std::string word;
    while(std::cin>>word)
    {
        word_list.push_back(word);
    }
    for( auto &w:word_list)
    {
        for(auto &c:w)
            c = toupper(c);
    }
    for(auto w:word_list)
    {
        std::cout << w << std::endl;
    }
}