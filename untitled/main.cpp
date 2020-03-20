#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
#include <vector>
int main()
{
    std::vector<double> nums;
    std::cout<<"Enter how many numbers you will insert? ";
    size_t n;
    std::cin>>n;
    for (size_t i=0;i<n;i++)
    {
        double numInserted;
        std::cin>>numInserted;
        nums.push_back(numInserted);
    }
    std::stringstream streamerOfStrings;
    for(size_t i=0;i<n;i++)
    {
        streamerOfStrings<<std::setprecision(4)<<std::setw(8)
                        <<std::left<<nums.at(i);
        if(i%4==0 && i!=0)
            streamerOfStrings<<std::endl;
    }
    std::string textOfDoubles;
    textOfDoubles.assign(streamerOfStrings.str());
    std::cout<<textOfDoubles<<std::endl;
    return 0;
}
