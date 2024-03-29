#include <iostream>
#include <string>

int main()
{
    std::cout << "Please enter your first name: ";
    std::string name;
    std::cin >> name;

    const std::string greeting = "Hello, " + name + "!";

    std::string frame(greeting.size() + 4, '*');
    std::string padding(greeting.size(), ' ');
    std::string second = "* " + padding + " *";
    
    std::cout << std::endl;
    std::cout << frame << std::endl;
    std::cout << second << std::endl;
    std::cout << "* " << greeting << " *" << std::endl;
    std::cout << second << std::endl;
    std::cout << frame << std::endl;

    return 0;
}