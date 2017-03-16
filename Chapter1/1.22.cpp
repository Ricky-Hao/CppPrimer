#include <iostream>
#include "Sales_item.h"
int main()
{
    Sales_item sum,book;
    int c=0;
    while(std::cin>>book)
    {
        if(c==0)
        {
            c=1;
            sum=book;
        }
        else
            sum+=book;
    }
    std::cout<<sum;
    return 0;
}