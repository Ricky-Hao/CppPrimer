#include <iostream>
int main()
{
    int a=10,sum=0;
    while(a>=0)
    {
        sum+=a--;
    }
    std::cout<<sum<<std::endl;
    return 0;
}