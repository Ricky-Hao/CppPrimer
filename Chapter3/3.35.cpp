#include "chapter3.h"
void main()
{
    int num_array[10];
    int *beg = std::begin(num_array);
    int *las = std::end(num_array);
    for (; beg != las;beg++)
        *beg = 1;
    for(auto num:num_array)
        cout << num;
}