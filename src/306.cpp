#include <iostream>
#include <string>

auto pytanie(std::string tekst) -> int
{
    int n;
    std::cout << tekst << "\n";
    std::cin >> n;
    return n;
}
auto search(int a[], int n, int szukana) -> int
{
    for(int i=0;i<n;i++){
        if(szukana == a[i]){
            std::cout << "ta liczba jest "<<i+1<<" w tabeli";
            return i;
        }
        }
        std::cout << "Nie ma takiej liczby";
        return -1;
    }
auto main() -> int
{
	int tab[10] { 42 , 9 , -1 , 18 ,3 , 59 , 101 , 31 , 72 , 12 };

    auto const c = pytanie ("Jakiej liczby szukasz?");
    int s = search(tab,10,c);


return 0;
}
