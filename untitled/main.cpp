#include <iostream>
#include <string>
int main()
{
    auto one{ "The \"\\\\\" escape sequence is a backslash character, \\." };
    std::cout<<one<<std::endl;
    auto two{ "C:\\ProgramData\\MyCompany\\MySoftware\\MyFile.ext" };
    std::cout<<two<<std::endl;
    auto three{ L"First line.\nSecond line.\nThird line.\nThe end." };
    std::cout<<three<<std::endl;


    // @@@@@@@@@@@@@@@@@@@@@@@@ now added Raw litteral ===================> {R"(...)"};
    auto escape{ R"(The "\\" escape sequence is a backslash character, \.)" };
    std::cout<<escape<<std::endl;
    auto path{ R"(C:\ProgramData\MyCompany\MySoftware\MyFile.ext)" };
    std::cout<<path<<std::endl;
    auto text{ LR"(First line.Second line.Third line.The end.)" };
    std::cout<<text<<std::endl;


    auto diff{ R"(The \"\\\\\" escape sequence is a backslash character, \\.)" };
    std::cout<<diff<<std::endl;



    std::string rawInString{R"(First line.\nSecond line.\nThird line.\nThe end.)"};
    std::cout<<rawInString<<std::endl;
    std::string inString{"(First line.\nSecond line.\nThird line.\nThe end.)"};
    std::cout<<inString<<std::endl;

    // if followin a " character to ) ==> R"(The answer is "(a - b)" not "(c - d)")"// Error!
    // we should use custome delimiters!
    // R"Fa-la-la-la-la(The answer is "(a - b)" not "(c - d)")Fa-la-la-la-la"
    // @@ example @@
//    std::string rawDelimiters{R"(The answer is "(a - b)" not "(c - d)")"};  //==> Uncomment ans see error!
    std::string rawCustomeDelimiters{R"Fa-la-la-la-la(The answer is "(a - b)" not "(c - d)")Fa-la-la-la-la"};
    std::cout<<rawCustomeDelimiters<<std::endl;
    return 0;
}
