#include <iostream>
#include <vector>
#include <string>
void main()
{
    std::vector<std::string> word_list;
    std::string word;
    while(std::cin>>word)
        word_list.push_back(word);
    for (auto wt=word_list.begin();wt!=word_list.end()&&!wt->empty();wt++)
    {
        for(auto &c:*wt)
            c = toupper(c);
        std::cout<< *wt << std::endl;
    }
}