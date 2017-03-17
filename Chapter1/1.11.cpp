#include <iostream>
int main()
{
    int a=0,b=0;
    std::cout<<"Please input two number:"<<std::endl;
    std::cin>>a>>b;
    a+=1;
    while(a<b)
    {
        std::cout<<a;
        a++;
    }
    return 0;
}