
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
    int i = 1;
    a     = pytanie("podaj wysokość");
    while (i <= a) {
        for (int j = 1; j <= i; j++) {
            std::cout << "*";
        }
        std::cout << "\n";
        i++;
    }
    return 0;
}
