#include "chapter3.h"
void main()
{
    int num_array[] = {1, 2, 3, 4, 5};
    vector<int> num_list(begin(num_array), end(num_array));
    for(auto num:num_list)
        cout << num;
}