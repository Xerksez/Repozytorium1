#include <iostream>
#include <string>
auto pytanie(std::string tekst) -> int
{
    int n;
    std::cout << tekst << "\n";
    std::cin >> n;
    return n;
}

auto najwieksza(int a, int b, int c) -> int
{
    int d;
    if (a > b) {
        d = a;
        a = 0;
    } else {
        b = d;
        b = 0;
    }
    if (c > d) {
        c = d;
        c = 0;
    }
    return d;
}

auto main() -> int
{
    int a, b, c, d;
    a = pytanie("Podaj pierwszą liczbę");
    b = pytanie("Podaj drugą liczbę");
    c = pytanie("Podaj trzecią liczbę");
    d = najwieksza(a, b, c);
    if (a * a + b * b + c * c == d * d) {
        std::cout << "Można zrobić trójkąt";
    } else {
        std::cout << "Trójkąt nie może być stworzony";
    }

    return 0;
}
