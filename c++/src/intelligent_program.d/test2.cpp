#include <iostream>

int main()
{
    char frage[256];
    std::cout << "<< "; 
    std::cin.getline(frage, 256);
    std::cout << ">> " << frage << std::endl;
}
