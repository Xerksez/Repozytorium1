
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
    int b = 1;
    a     = pytanie("Podaj liczbę");
    for (auto i = 1; i <= a; i++) {
        b = b * i;
    }
    std::cout << "silnia tej liczby to: " << b;
    return 0;
}
