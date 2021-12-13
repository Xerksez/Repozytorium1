#include <iostream>
auto sortuj(int t[], int n) -> void
{
    for(int i=0; i<n; i++)
    {
        for(int j=1; j<n-i; j++)
            if(t[j-1]>t[j])
            {
                int tym = t[j];
                t[j] = t[j-1];
                t[j-1] = tym;
            }
    }
    for(int i=0; i<n; i++)
        std::cout<<t[i]<<"\n";
}

auto main() -> int
{
    int tablica[] = { 42, 9, -1, 18, 59, 3, 101, 31, 72, 12 };
    sortuj(tablica,10);
    return 0;
}
