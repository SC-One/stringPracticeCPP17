#include<iostream>
#include<QDebug>
int main()
{
    std::string name,fname;
    std::cout<<"Inser your FirsName and SecondName: ";
    std::cin>>name>>fname;
    std::string completeName {"Name: "+name+"   FamilyName: "+fname };
    std::cout<<completeName;
    std::cout<<std::endl<<"Hi "<<name<<" "<<fname<<std::endl;
    return 0;
}
