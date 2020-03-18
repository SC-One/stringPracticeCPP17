#include<iostream>
#include<QDebug>
int main()
{
    std::string phrase {"The higher the fewer."};
    std::string word1 {phrase.substr(4, 6)};        // "higher"
    std::string word2 {phrase.substr(4, 100)};      // "higher the fewer."
    std::string word {phrase.substr(4)};            // "higher the fewr."
    return 0;
}
