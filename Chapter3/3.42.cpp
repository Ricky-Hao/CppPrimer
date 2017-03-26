#include "chapter3.h"
void main()
{
    vector<int> num_list = {1, 2, 3, 4, 5, 6};
    int num_array[6];
    int i = 0;
    for (int *beg = begin(num_array), *last = end(num_array); beg != last;beg++)
    {
        *beg = num_list[i];
        i++;
    }
    for (auto num : num_array)
        cout << num;
}