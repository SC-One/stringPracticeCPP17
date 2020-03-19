#include <iostream>
#include <string>

int main()
{
    std::string sentence {"His son has good brain."};
    std::string word1 {"good"};
    std::string word2 {"had"};
    std::cout<<sentence.find(word1)<<std::endl;
    std::cout<<sentence.find(word2)<<std::endl;
    std::cout<<sentence.find("His")<<std::endl;
    std::cout<<sentence.find("his")<<std::endl;
    std::cout<<sentence.find('x')<<std::endl;

    // what's std::string::npos
    if(sentence.find(word2) == std::string::npos)
        std::cout<<"Not found!"<<std::endl;
    return 0;
}
