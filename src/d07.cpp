#include <iostream>
#include <string>
auto pytanie(std::string tekst) -> int
{
    int n;
    std::cout << tekst << "\n";
    std::cin >> n;
    return n;
}
struct Samochod
{
std::string marka;
std::string model;
int rok_produkcji;
int przebieg;
int cena_wyjsciowa;
int cena_koncowa;
std::string ToString()const ;
int funkcja();
};

std::string Samochod::ToString() const;
{
std::string opis;
opis=(marka+model+to_string(rok_produkcji)+to_string(przebieg)+to_string(cena_wyjsciowa)+to_string(cena_koncowa);
return opis;
}

void Samochod::funkcja()
{
cena_koncowa = cena wyjsciowa - (10000*(2021-rok_produkcji)+(3*przebieg));
}


auto main() -> int
{

Samochod auto
{
marka,
model,
2000,
200,
10000000

};
std::cout<<auto.opis();
return 0;
}
