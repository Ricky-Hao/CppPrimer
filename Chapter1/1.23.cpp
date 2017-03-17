#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item item;
    Sales_item current_item;
    if(std::cin>>item)
    {
        current_item=item;
        while(std::cin>>item)
        {
            if(current_item.isbn()==item.isbn())
                current_item+=item;
            else
            {
                std::cout<<current_item<<std::endl;
                current_item=item;
            }
        }
        std::cout<<current_item<<std::endl;
    }
    return 0;
}