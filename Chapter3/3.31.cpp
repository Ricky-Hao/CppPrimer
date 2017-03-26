#include <iostream>
#include <string>
#include <vector>
void main()
{
    int num_array[10];
    for(int i=0;i<10;i++)
    {
        num_array[i] = i;
    }
    for(auto num : num_array)
        std::cout << num;
}