#include <iostream>
#include <vector>
#include <string>
void main()
{
    std::vector<std::string> word_list;
    std::string word;
    while(std::cin>>word)
        word_list.push_back(word);
    for (auto wt = word_list.cbegin(); wt != word_list.cend();wt++)
        std::cout << *wt << std::endl;
}