#include <iostream>
#include <vector>
#include <string>
void main()
{
    std::vector<int> num_list{1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    for (auto &nt = num_list.begin(); nt != num_list.end();nt++)
        *nt = *nt * 2;
    for (auto nt = num_list.begin(); nt != num_list.end();nt++)
        std::cout << *nt << std::endl;
}