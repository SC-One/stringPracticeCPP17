#include <iostream>
#include <string>
int main()
{
    /*
     * std::stoi()          type integer
     * std::stol()          type long
     * std::stoll()         longlong
     * std::stoul()         unsignedlong
     * std::stoull()        unsignedlonglong
     * std::stof()          float
     * std::stod()          double
     * std::stold()         longdouble
     */

    std::string s{ "1917" };
    int i{ std::stoi(s) };      // i == 1917
    std::cout<<i<<std::endl;
    s.assign("1.234");
    double d{std::stod(s)};
    d/=10;
    std::cout<<d<<std::endl;
    return 0;
}
