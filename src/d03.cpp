#include <iostream>
#include <string>
auto pytanie(std::string tekst) -> int
{
    int n;
    std::cout << tekst << "\n";
    std::cin >> n;
    return n;
}
auto pierwsza(int a) -> int
{
int l=0;
bool x= true;
if(a==0 or a==1)
{
return 0;
}else
{
for(int i=2;i<(a/2);i++)
{
l++;
if(a%i==0)
{ x=false;
}
}
if(x==true)
{
std::cout<<"Liczba "<<a<<" jest liczbą pierwszą";
std::cout<<"wykonało "<<l<<" pętli";
return 0;
}
else
{
std::cout<<"Liczba "<<a<<" nie jest liczbą pierwszą";
std::cout<<"wykonało "<<l<<" pętli";
return 0;

}
}
}
auto main() -> int
{
    int a,b;
    a = pytanie("Podaj liczbę");
    b=pierwsza(a);
std::cout<<b;
    return 0;
}




