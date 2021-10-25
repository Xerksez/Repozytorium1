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
    int i = 1;
    a     = pytanie("Podaj liczbę");
    while (i <= a) {
        b = b * i;
        i++;
    }
    std::cout << "silnia tej liczby to: " << b;
    return 0;
}
