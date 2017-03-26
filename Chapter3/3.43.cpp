#include "chapter3.h"
void main()
{
    int num_array[2][2] = {{1, 2}, {3, 4}};
    for(int (&a1)[2]:num_array)
    {
        for(int num:a1)
            cout << num;
    }
    cout << endl;

    for (int i = 0; i < 2;i++)
    {
        for (int k = 0; k < 2;k++)
            cout << num_array[i][k];
    }
    cout << endl;

    for (int (*beg)[2] = begin(num_array); beg != end(num_array);beg++)
    {
        for (int *beg1 = begin(*beg); beg1 != end(*beg);beg1++)
            cout << *beg1;
    }
}