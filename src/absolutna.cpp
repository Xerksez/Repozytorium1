
#include <iostream>
#include <string>
auto pytanie(std::string tekst) -> int
{
int n;
std::cout<< tekst<<"\n";
std::cin>>n;
return n;
}
auto  main() ->int
{
int a,b;
a =pytanie("Podaj liczbę");
b= labs(a);
std::cout<<" wynik: "<<b;
return 0;
}


