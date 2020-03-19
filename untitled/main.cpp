#include<iostream>
#include<string>
int main()
{
    std::string text1{"Nope"};
    std::string text2{"Yeap"};
    std::string text3{"Nope"};
    std::cout<<text1<<"<>"<<text2<<"    "<<text1.compare(text2)<<std::endl;         // N<Y          ==> negative
    std::cout<<text2<<"<>"<<text1<<"    "<<text2.compare(text1)<<std::endl;         // Y>N          ==> Positive
    std::cout<<text3<<"<>"<<text1<<"    "<<text3.compare(text1)<<std::endl;         // Nope==Nope   ==> Zero


    std::string word1{"A jackhammer"};
    std::string word2{"jack"};
    int result{word1.compare(2,word2.length(),word2)};
    if(result==0)
    {
        std::cout<<"word1("<<word1<<") contains word2("<<word2<<")"<<std::endl;
    }


    std::string text{"Hamid has brown hair."};
    std::string word{"brown"};
    for(size_t i=0;i<(text.length()-word.length()+1);i++)
    {
        if(text.compare(i,word.length(),word)==0)
        {
            std::cout<<"atIndex["<<i<<"]: text("<<text<<") contains ("<<word<<")"<<std::endl;
        }
    }
    return 0;
}
