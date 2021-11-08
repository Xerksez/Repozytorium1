
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
    a     = pytanie("Podaj liczbę");
if(a>7)
{
 std::cout<<"Podaj liczbę z przedziału 1-7";
}

    switch(a)
{
 case 1:
std::cout<<"poniedziałek";
break;
 case 2: 
std::cout<<"wtorek";
break;
 case 3: 
std::cout<<"środa";
break;
 case 4: 
std::cout<<"czwartek";
break;
 case 5: 
std::cout<<"piątek";
break;
 case 6: 
std::cout<<"sobota";
break;
 case 7: 
std::cout<<"niedziela";
break;
}
    return 0;
}
