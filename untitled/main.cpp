#include<iostream>
#include<QDebug>
int main()
{
    std::cout<<"Hi"<<std::endl;
    qDebug()<<"Bye in Debug";
    int a;
    std::cin>>a;
    std::cout<<a<<std::endl;

    return 0;
}
