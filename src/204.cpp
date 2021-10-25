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
    a = pytanie("Podaj pierwszą liczbę");
    if ((a == 0) || (a == 1)) {
        std::cout << "liczba nie jest pierwsza";
        return 0;
    } else {
        for (int i = 2; i < a; i++) {
            if (a % i == 0) {
                std::cout << "liczba nie jest pierwsza";
                return 0;
            } else {
                std::cout << "liczba jest pierwsza";
                return 0;
            }
        }
    }
    return 0;
}
