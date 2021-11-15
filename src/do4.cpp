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
    a     = pytanie("podaj wysokość trójkąta");
    while (i <= a) {
        if (i == 1 || i == a) {
            for (int j = 1; j <= a+3; j++)
                std::cout << "*";
        } else {
            std::cout << " ";
            for (int c = 1; c <= a - 2; c++)
                std::cout << "*";
            std::cout << " ";
        }
        std::cout << "\n";
        i++;
    }
    return 0;
}


