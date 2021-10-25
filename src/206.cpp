
#include <iostream>
#include <string>
auto pytanie(std::string tekst) -> int
{
    int n;
    std::cout << tekst << "\n";
    std::cin >> n;
    return n;
}
auto sprawdzanie(int a, int b) -> int
{
    if (a > b) {
        std::cout << a << " > " << b << "\n";
    }
    if (b > a) {
        std::cout << a << " < " << b << "\n";
    }
    if (a == b) {
        std::cout << a << " == " << b << "\n";
    }
    return 0;
}

auto main() -> int
{
    int a, b, c, d, e, f;
    a = pytanie("Podaj liczbe porownywaną");
    b = pytanie("Podaj 1 liczbę");
    c = pytanie("Podaj 2 liczbę");
    d = pytanie("Podaj 3 liczbę");
    e = pytanie("Podaj 4 liczbę");
    f = pytanie("Podaj 5 liczbę");

    sprawdzanie(a, b);
    sprawdzanie(a, c);
    sprawdzanie(a, d);
    sprawdzanie(a, e);
    sprawdzanie(a, f);

    return 0;
}
