#include <string>
#include <iostream>

int main()
{
    std::string str;
    while (true)
    {
        std::getline(std::cin, str);
        if (str == "")
            break;
        std::cout << str << std::endl;
    }
    return 0;
}