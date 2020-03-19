#include <iostream>
#include <string>
#include<vector>
int main()
{
    std::string text{"Hamid has brown hair."};
    std::string word{"green"};
    const std::string separators {" ,;:.\"!'\n"};
    size_t start{text.find("brown")};
    size_t end{text.find_first_of(separators,start+1)};
    text.replace(start,end-start,word);
    std::cout<<text<<std::endl;
    return 0;
}
