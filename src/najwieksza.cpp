
#include <iostream>
#include <string>
auto pytanie(std::string tekst) -> int
{
int n;
std::cout<< tekst<<"\n";
std::cin>>n;
return n;
}

auto najwieksza(int a, int b, int c) ->int
{
int d;
if(a>b)
{
d=a;
}else
{
d=b;
}
if(c>d)
{
d=c;
}
return d;
}

auto  main() ->int
{
int a,b,c,d;
a =pytanie("Podaj pierwszą liczbę");
b =pytanie("Podaj drugą liczbę");
c= pytanie("Podaj trzecią liczbę");
d= najwieksza(a,b,c);
std::cout<<" Największa liczba to: "<<d;
return 0;
}



