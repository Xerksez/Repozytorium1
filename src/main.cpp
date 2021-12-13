#include <stdio.h>
#include <array>
#include <iostream>
#include <string>
auto zamiana(int* a, int* b) -> void
{
    int t = *a;
    *a = *b;
    *b = t;
}
auto srodek(int tab[], int nisko, int wysoko) -> int
{
    int more = tab[wysoko];
    int i = (nisko - 1);
    for (int j = nisko; j <= wysoko - 1; j++)
    {
        if (tab[j] <= more)
        {
            i++;
            zamiana(&tab[i], &tab[j]);
        }
    }
    zamiana(&tab[i + 1], &tab[wysoko]);
    return (i + 1);

}


void sortowanie(int tab[], int nisko, int wysoko)
{
    if (nisko < wysoko)
    {
        int p = srodek(tab, nisko, wysoko);
        sortowanie(tab, nisko, p - 1);
        sortowanie(tab, p + 1, wysoko);
    }
}


void wypisanie(int tab[], int wielkosc)
{
    int i;
    for (i = 0; i < wielkosc; i++)
        std::cout << tab[i]<<" ";
}


auto main() -> int
{
    int tab[] = {42, 9, -1, 18, 59, 3, 101, 31, 72, 12};
    int n = sizeof(tab)/sizeof(tab[0]);
    sortowanie(tab, 0, n - 1);
    std::cout << "Tablica posortowana poprawnie\n-> ";
    wypisanie(tab, n);
    return 0;
}
