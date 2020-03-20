#include <iostream>
#include <string>
int main()
{
    std::string text{"I never love you"};
    std::string textEliminate{"never "};
    size_t start{text.find(textEliminate)};
    if(start!=std::string::npos)
    {
        text.erase(start,textEliminate.length());
    }
    std::cout<<text<<std::endl;

    text.erase(2);
    std::cout<<text<<std::endl;

    text.erase();
    text.append("I love God.");
    std::cout<<text<<std::endl;
    text.clear();
    std::cout<<text<<std::endl;

    return 0;
}
