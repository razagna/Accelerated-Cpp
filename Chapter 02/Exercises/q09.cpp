#include <iostream>

int main()
{
    std::cout << "Enter two numbers seperated by a space: ";

    int first, second;
    std::cin >> first >> second;

    if(first > second)
    {
        std::cout << first << " is larger than " << second << std::endl;
    }
    else
    {
        std::cout << second << " is larger than " << first << std::endl;
    }

}