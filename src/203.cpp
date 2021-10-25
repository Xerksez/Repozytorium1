
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
    int a, b, s;
    a = pytanie("Podaj pierwszą liczbę");
    b = pytanie("Podaj drugą liczbę");
    s = pytanie("Podaje liczbę kroków");
    if (a < b) {
        while (a <= b) {
            if (s == 0) {
                std::cout << "liczba kroków to 0";
                return 0;
            }
            std::cout << a << "\n";
            a = a + s;
        }
    } else {
        while (b <= a) {
            if (s == 0) {
                std::cout << "liczba kroków to 0";
                return 0;
            }
            std::cout << a << "\n";
            a = a + s;
        }
    }
    return 0;
}
