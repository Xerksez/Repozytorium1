
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
int a,b,c;
a =pytanie("Podaj pierwszą liczbę");
b= pytanie("Podaj drugą liczbę");
c= pytanie("Podaj trzecią liczbę");
while(a!=b)
	{
	a++;
	if(c==0)
                {
                std::cout<<"nie można dzielić przez 0!";
	return 0;
                }
	if(a%c==0)
	{
		std::cout<<a<<"\n";
	}
}
return 0;
}






