
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
    a               = pytanie("Podaj miesiąc");
    b               = pytanie("Podaj rok");
    bool przestepny = (b % 4 == 0 && b % 100 != 0) || (b % 400 == 0);
    if (a > 12) {
        std::cout << "Podaj liczbę z zakresu 1-12";
    }
    if (przestepny == 1) {
        switch (a) {
        case 1:
            std::cout << "Styczeń " << b << " roku ma 31 dni";
            break;
        case 2:
            std::cout << "Luty " << b << " roku ma 29 dni";
            break;
        case 3:
            std::cout << "Marzec " << b << " roku ma 31 dni";
            break;
        case 4:
            std::cout << "Kwiecień " << b << " roku ma 30 dni";
            break;
        case 5:
            std::cout << "Maj " << b << " roku ma 31 dni";
            break;
        case 6:
            std::cout << "Czerwiec " << b << " roku ma 30 dni";
            break;
        case 7:
            std::cout << "Lipiec " << b << " roku ma 31 dni";
            break;
        case 8:
            std::cout << "Sierpień " << b << " roku ma 31 dni";
            break;
        case 9:
            std::cout << "Wrzesień " << b << " roku ma 30 dni";
            break;
        case 10:
            std::cout << "Październik" << b << " roku ma 31 dni";
            break;
        case 11:
            std::cout << "Listopad" << b << " roku ma 30 dni";
            break;
        case 12:
            std::cout << "Grudzień" << b << " roku ma 31 dni";
            break;
        }
    } else {
        switch (a) {
        case 1:
            std::cout << "Styczeń " << b << " roku ma 31 dni";
            break;
        case 2:
            std::cout << "Luty " << b << " roku ma 28 dni";
            break;
        case 3:
            std::cout << "Marzec " << b << " roku ma 31 dni";
            break;
        case 4:
            std::cout << "Kwiecień " << b << " roku ma 30 dni";
            break;
        case 5:
            std::cout << "Maj " << b << " roku ma 31 dni";
            break;
        case 6:
            std::cout << "Czerwiec " << b << " roku ma 30 dni";
            break;
        case 7:
            std::cout << "Lipiec " << b << " roku ma 31 dni";
            break;
        case 8:
            std::cout << "Sierpień " << b << " roku ma 31 dni";
            break;
        case 9:
            std::cout << "Wrzesień " << b << " roku ma 30 dni";
            break;
        case 10:
            std::cout << "Październik" << b << " roku ma 31 dni";
            break;
        case 11:
            std::cout << "Listopad" << b << " roku ma 30 dni";
            break;
        case 12:
            std::cout << "Grudzień" << b << " roku ma 31 dni";
            break;
        }
    }
    return 0;
}
