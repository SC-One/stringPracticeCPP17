#include <iostream>
#include <string>
int main()
{
    std::string text,wordToChange,replaceWord;
    std::cout<<"Insert a text that will terminated by *:\n";
    std::getline(std::cin,text,'*');
    std::cout<<"Insert the word to be changed: \n";
    std::cin>>wordToChange;
    std::cout<<"Insert the replacement string: \n";
    std::cin>>replaceWord;
    size_t wordToChangeLength{wordToChange.length()};
    for(size_t i{0};i<(text.length()-wordToChange.length()+1);)
    {
        size_t foundIndex{text.find(wordToChange,i)};
        if(foundIndex!=std::string::npos)
        {
            text.replace(foundIndex,wordToChangeLength,replaceWord);
            i+=(foundIndex+wordToChangeLength);
        }
        else
        {
            break;
        }
    }
    std::cout<<":::::::::::::::::::::::::::::::"<<std::endl;
    std::cout<<text<<std::endl;
    return 0;
}
