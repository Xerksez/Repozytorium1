#include <iostream>
#include <string>
auto pytanie(std::string tekst) -> int
{
    int n;
    std::cout << tekst << "\n";
    std::cin >> n;
    return n;
}

auto dodawanie(int a, int b) -> int
{
    int c;
    c = a + b;
    return c;
}

auto main() -> int
{
    int a, b, c;
    a = pytanie("Podaj pierwszą liczbę");
    b = pytanie("Podaj drugą liczbę");
    c = dodawanie(a, b);
    std::cout << " wynik: " << c;
    return 0;
}
