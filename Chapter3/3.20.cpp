#include <string>
#include <iostream>
#include <vector>
void main()
{
    std::vector<int> num_list;
    int num;
    while(std::cin>>num)
        num_list.push_back(num);
    for (int i = 0; i < num_list.size()/2;i++)
    {
        std::cout << num_list[i] + num_list[num_list.size() - i-1] << std::endl;
    }
}