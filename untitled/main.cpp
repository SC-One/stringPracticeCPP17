#include <iostream>
#include <string>
#include<vector>
int main()
{
    std::vector<std::string> words;
    std::string text;
    std::cout<<"Insert a text that terminated by #: "<<std::endl;
    std::getline(std::cin,text,'#');
    const std::string seprators{" ,;:.\"!?'\n"};
    size_t start {text.find_first_not_of(seprators)};
    size_t end {text.find_first_of(seprators,start+1)};
    size_t maxLength{0};
    while(start!=std::string::npos)
    {
        if(end==std::string::npos)
            end=text.length();
        std::string help{text.substr(start,end-start)};
        if(maxLength<help.length())
            maxLength=help.length();
        words.push_back(help);
        start=text.find_first_not_of(seprators,end+1);
        end=text.find_first_of(seprators,start+1);
    }
    size_t counter{0};
    for(auto &wd:words)
    {
        size_t l=wd.length();
        wd.insert(l,(maxLength-l+2),' ');
        std::cout<<wd;
        if((++counter%5)==0)
            std::cout<<std::endl;
    }
    std::cout<<std::endl;
    return 0;
}
