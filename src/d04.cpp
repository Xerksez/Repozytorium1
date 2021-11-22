#include <iostream>
#include <string>
auto pytanie(std::string tekst) -> int
{
    int n;
    std::cout << tekst << "\n";
    std::cin >> n;
    return n;
}

auto main() -> int
{
    int a;
    int i        = 1;
    int spacja   = 1;
    a            = pytanie("podaj wysokość trójkąta");
    int g        = (a * 2 - 3) / 2;
    int gwiazdka = g;
    while (i <= a) {
        if (i == 1 || i == a) {
            for (int j = 0; j <= (a * 2) - 3; j++)
                std::cout << "*";
        } else {
            while (g >= 0) {
                std::cout << "*";
                g--;
            }
            for (int c = 2; c <= spacja; c++) {
                g = gwiazdka;
                std::cout << " ";
            }
            while (g >= 0) {
                std::cout << "*";
                g--;
            }
            g = gwiazdka;
        }
        std::cout << "\n";
        i++;
        gwiazdka--;
        spacja = spacja + 2;
        g      = gwiazdka;
    }
    return 0;
}


// 4
//*******
//*** ***
//**   **
//*     *
//*******
//
//
//
