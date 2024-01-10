#include <iostream>

int main ()
{
    int rute = 0, kesulitan [100];
    std::cin >> rute;

    for (int i = 0; i < rute; i++)
        std::cin >> kesulitan [i];

    for (int  i = 0; i < rute - 1; i++)
        for (int  j = 0; j < rute - i - 1; j++)
            if (kesulitan [j] > kesulitan [j + 1])
            {
                int sementara = kesulitan [j];
                kesulitan [j] = kesulitan [j + 1];
                kesulitan [j + 1] = sementara;
            }

    std::cout << "\n" << kesulitan [0];
    return 0;
}