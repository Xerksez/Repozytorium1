
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
a =pytanie("Podaj pierwszą liczbę");
b= pytanie("Podaj drugą liczbę");
while(a!=b)
{
std::cout<<a<<"\n";
a++;
}
return 0;
}






