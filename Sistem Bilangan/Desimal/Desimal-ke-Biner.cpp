#include <iostream>

int main ()
{
    int desimal = 0;
    std::string biner = "";
    
    std::cout << "Desimal   : ";
    std::cin >> desimal;

    while (desimal > 0)
    {
        int sisa = desimal % 2;
        biner += std::to_string (sisa);
        desimal /= 2;
    }

    std::cout << "Biner     : ";
    for (int i = biner.length () - 1; i >= 0; i--)
        std::cout << biner [i];
    
    return 0;
}