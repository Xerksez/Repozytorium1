
#include <iostream>
#include <string>
auto pytanie(std::string tekst) -> int
{
int n;
std::cout<< tekst<<"\n";
std::cin>>n;
return n;
}
auto wieksza(int a, int b) ->int
{
if(a>b)
return a;
else
return b;
}

auto  main() ->int
{
int a,b,c;
a =pytanie("Podaj pierwszą liczbę");
b =pytanie("Podaj drugą liczbę");
c= wieksza(a,b);
std::cout<<" Większa liczba to: "<<c;
return 0;
}


