#include "chapter3.h"
void main()
{
    vector<int> list_1={1,2,3,4,5,6,7,8,9,0};
    vector<int> list_2={1,2,3,4,5,6,7,8,9,1};

    for (auto beg = list_1.cbegin(), last = list_1.cend(); beg != last; beg++)
    {
        if(*beg!=list_2[last-beg])
        {
            cout << *beg << endl;
            break;
        }
    }
}