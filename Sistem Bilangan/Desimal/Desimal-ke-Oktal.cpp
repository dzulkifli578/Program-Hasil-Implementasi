#include <iostream>

int main ()
{
    int desimal = 0;
    std::string oktal = "";

    std::cout << "Desimal       : ";
    std::cin >> desimal;

    while (desimal > 0)
    {
        int sisa = desimal % 8;

        oktal += std::to_string (sisa);
        desimal /= 8;
    }

    std::cout << "Oktal         : ";
    for (int i = oktal.length () - 1; i >= 0; i--)
        std::cout << oktal [i];
    
    return 0;
}