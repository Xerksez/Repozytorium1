
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
    int a, b;
    int c = 0;
    int d = 0;
    a     = pytanie("Podaj limit");
    b     = pytanie("Podaj dzielnik");
    while (c <= a) {
        if (c % b == 0) {
            d = d + c;
        }
        c++;
    }
    std::cout << "suma tych liczb to: " << d;
    return 0;
}
