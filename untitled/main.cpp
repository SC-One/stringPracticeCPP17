#include<iostream>
#include<QDebug>
int main()
{
    std::string text;
    unsigned vowels {0},consonant {0};
    std::cout<<"Insert your Text: ";
    std::getline(std::cin, text);
    for(auto &context:text)
    {
        if ( std::isalpha(context) /* Or ==> (context<='Z' && context>='A') || (context<='z' && context>='a') */)
        {
            switch (std::tolower(context))
            {
            case 'a':case'e': case'i': case 'o': case 'u':
                vowels++;
                break;
            default:
                consonant++;
                break;
            }
        }
    }
    std::cout<<"Vowels: "<<vowels<<std::endl;
    std::cout<<"Consonants: "<<consonant<<std::endl;
    return 0;
}
