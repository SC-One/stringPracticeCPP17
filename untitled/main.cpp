#include <iostream>
#include <string>
int main()
{

    std::u16string one{u"one of you come"};
    std::u32string two{U"both of you come"};

    // @@Note@@
    /*
     * u16string and u32string have same function as string.
     * so you can use find,erase,clear,replace,substr and etc.
     */

    std::string s(u8"字符串"); // UTF-8 encoding of the Chinese word for "string"
    std::cout << s.length()<<"\t"<<s<<std::endl;   // Length: 9 code units!



    // you can see ICU project to global unicode
    return 0;
}
