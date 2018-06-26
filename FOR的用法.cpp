#include <iostream>
#include<vector>
int main()
{
    int nums[3]={0,1,2};
    std::vector<int>vs={0,1,2,3,4};
    for(auto num:nums)
    {
        std::cout<<num<<"\t";
    }
    std::cout<<std::endl;

    for(auto v:vs)
    {
        std::cout<<v<<"\t";
    }
    std::cout<<std::endl;

    std::string str="hello,world!";
    for(auto ch:str)
    {
        std::cout<<ch;
    }
    std::cout<<std::endl;

    for(auto &ch1:str)
    {
        std::cout<<ch1;
    }
    std::cout<<std::endl;
    /*
    for each (int num  in nums)//vs编译器关键字
    {
        std::cout << num << "\t";
    }
    std::cout << std::endl;
    for each (int v  in vs)
    {
        std::cout << v << "\t";
    }
    system("pause");
    */

    return 0;
}
