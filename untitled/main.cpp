#include<iostream>
#include<QDebug>
int main()
{
    std::string one {"1"};
    short int correct {2};
    std::cout<<(one + std::to_string(correct))<<std::endl;
    one.append("0 ==> TrueFalse");
    std::cout<<one<<std::endl;
    return 0;
}
