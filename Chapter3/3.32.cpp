#include "chapter3.h"
void main()
{
    vector<int> num_list;
    for (int i = 0; i < 10;i++)
        num_list.push_back(i);
    for (auto num:num_list)
        cout << num;
}