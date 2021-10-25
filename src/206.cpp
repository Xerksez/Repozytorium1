
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

auto main(int argc, char* argv[]) -> int
{
    if(argc==0)
{
return 1;
}
int i=2;
while (i<argc)
{
    sprawdzanie(std::stoi(argv[1]),std::stoi( argv[i]));
i++;
}

    return 0;
}
