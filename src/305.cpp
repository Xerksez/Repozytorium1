#include <iostream>

auto amax(int t[], int n) -> int
{

    int maksymalna = t[0];
    for(int i = 1;i < n; ++i){
       if(maksymalna < t[i])
           maksymalna = t[i];
    }


    std::cout << "Najwieksza liczba to  " << maksymalna;

    return maksymalna;
}


auto main() -> int
{

	int tablica[10] { 42 , 9 , -1 , 18 , 59, 3, 101 , 31 , 72 , 12,} ;
    amax(tablica,10);
return 0;
}
