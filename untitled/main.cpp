#include<iostream>
#include<string>
#include<vector>
#include<utility>

int main()
{
    std::vector<std::string> list;
    char ch{'y'};
    do
    {
        std::string movaghat;
        std::cout<<"Inputer the FullName: ";
        std::cin>>movaghat;
        list.push_back(movaghat);
        std::cout<<"do you want insert more FullNames(y,n): ";
        std::cin>>ch;
    }while(std::tolower(ch)=='y');
    // selectionSort
    for(std::vector<std::string>::iterator it=list.begin(); it<(list.end()-1);it++)
    {
        for(std::vector<std::string>::iterator jt=it+1; jt<(list.end());++jt)
        {
            if(*jt < *it)
            {
                std::swap(*it,*jt);
            }
        }
    }
    for(const auto &namesList:list)
        std::cout<<namesList<<std::endl;
    std::cout<<"===============>Ended !"<<std::endl;
    return 0;
}
