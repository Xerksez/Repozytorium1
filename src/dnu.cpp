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
    a = pytanie("Podaj liczbę");
    if (a > 0) {
        std::cout << "1 czyli liczba dodatnia";
    } else if (a < 0) {
        std::cout << "-1 czyli liczba ujemna";
    } else {
        std::cout << "0 czyli liczba równa zero";
    }

    return 0;
}
