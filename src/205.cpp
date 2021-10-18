#include <iostream>
#include <string>
auto pytanie(std::string tekst) -> int
{
int n;
std::cout<< tekst<<"\n";
std::cin>>n;
return n;
}

auto czy_pierwsza(int a) -> int
{
bool x=true;
	if((a==0)||(a==1))
	{
	return 0;
	}
	else
	{ 
		for(int i=2;i<a;i++)
		{
        		if(a%i==0)
        		{
       			 x=false;
       			 }
		}
		if(x==true)
		{
		return a;
		}
		else
		{
			return 0;
		}
	}
}
auto  main() ->int
{
int a;
int c=0;
a =pytanie("Podaj liczbę");
for(int i=2;a>=i;i++)
{
if(czy_pierwsza(i)>0)
c+=i;
}
std::cout<<"suma liczb pierwszych do liczby: "<<a<<"to : "<<c;
return 0;
}
