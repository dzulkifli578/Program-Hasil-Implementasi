#include <iostream>

int main ()
{
    int desimal = 0;
    std::string heksadesimal = "";

    std::cout << "Desimal       : ";
    std::cin >> desimal;

    while (desimal > 0)
    {
        int sisa = desimal % 16;
        switch (sisa)
        {
        case 10: heksadesimal += "A";
                 break;
        case 11: heksadesimal += "B";
                 break;
        case 12: heksadesimal += "C";
                 break;
        case 13: heksadesimal += "D";
                 break;
        case 14: heksadesimal += "E";
                 break;
        case 15: heksadesimal += "F";
                 break;
        default: heksadesimal += std::to_string (sisa);
                 break;
        }
        desimal /= 16;
    }

    std::cout << "Heksadesimal  : ";
    for (int i = heksadesimal.length () - 1; i >= 0; i--)
    {
        std::cout << heksadesimal [i];
    }
    
    return 0;
}