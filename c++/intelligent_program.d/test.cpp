#include <iostream>

int main()
{
        std::string s;
        std::cout << "warte auf eingabe" << std::endl;
        getline(std::cin, s); 
        std::cout << "s ist: " << s << std::endl;
        return 0;
}
