#include <iostream>
#include <string>

int main()
{
    std::string text;
    std::string subText;
    std::cout<<"Insert a text:"<<std::endl;
    std::getline(std::cin,text);
    std::cout<<"Insert a word to search in your text: ";
    std::cin>>subText;
    int count{0};
    for(size_t i=0;i<(text.length() - subText.length() + 1);i++)
    {
        size_t pos{text.find(subText,i)};
        if(pos==std::string::npos)
            break;
        count++;
        i=pos+subText.length()-1;
    }
    std::cout<<count<<std::endl;
    return 0;
}
