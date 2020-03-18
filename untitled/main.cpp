#include<iostream>
#include<QDebug>
int main()
{
    std::string sentence {"Hi guys , I'm here now!"};
    std::cout<<sentence<<std::endl;
    size_t sizeLen {(sizeof (sentence)/sizeof (sentence[0]))};
    for(size_t i=0;i< sizeLen;i++)
        sentence[i]=std::toupper(sentence[i]);
    std::cout<<sentence<<std::endl;

    for(size_t i=0;i< sizeLen;i++)
        sentence[i]=std::tolower(sentence[i]);
    std::cout<<sentence<<std::endl;


    /////////////////////////////////////////////
    sentence = "Hi guys , I'm here now!" ;
    for(auto &ch:sentence)
        ch=std::toupper(ch);
    std::cout<<sentence<<std::endl;
    return 0;
}
