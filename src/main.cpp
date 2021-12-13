#include <iostream>
#include <string>
#include <array>
#include <algorithm>



auto amin(int a[], int n) -> auto
{
    int najmniejsza;
    std::sort(a,a+10);
    najmniejsza = a[0];
    std::cout << "Najmniejsza liczba to   " << najmniejsza;

    return najmniejsza;
}

auto main() -> int
{
	int tablica[10] { 42 , 9 , -1 , 18 , 59 , 3 , 101 , 31 , 72 , 12 };
    amin(tab,1);


return 0;
}
