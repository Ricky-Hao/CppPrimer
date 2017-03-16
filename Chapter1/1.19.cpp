#include <iostream>
int main()
{
    int a=0,b=0,ta=0,tb=0;
    std::cout<<"Please input two number:"<<std::endl;
    std::cin>>ta>>tb;
    if(ta>tb)
    {
        a=tb;
        b=ta;
    }
    else
    {
        a=ta;
        b=tb;
    }
    a+=1;
    while(a<b)
    {
        std::cout<<a;
        a+=1;
    }
    return 0;
}