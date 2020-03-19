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
    size_t count{0};
    size_t index{};
    while ((index = text.find(subText, index)) != std::string::npos)
    {
        ++count;
        index += subText.length();
    }
    std::cout<<count<<std::endl;
    return 0;
}
