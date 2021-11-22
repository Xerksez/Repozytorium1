#include <math.h>
#include <iostream>
#include <string>
#include <time.h>
#include <cstdlib>
#include <array>
auto pytanie(std::string tekst) -> int
{
    int n;
    std::cout << tekst << "\n";
    std::cin >> n;
    return n;
}
auto init(int a[], int n) -> void
{
    for (int i = 0; i <= n; i++) {
        a[i] = 0;
    }
}
auto rinit(int a[], int n) -> void
{	srand(time(NULL));
    for (int i = 0; i <= n; i++) {
        a[i] = rand()%100;
    }
}

auto iota(int a[], int n, int start) -> void
{
    for (int i = 0; i <= n; i++) {
        a[i] = start;
        start++;
    }
}
auto asum(std::array<int,10>a , int n)
{
int s=0;
for (int i = 0; i < n; i++) {
	s=s+a[i];
    }
return s;
}
auto main() -> int
{	int i=0;
    int n = pytanie("ile ma być liczb?");
    std :: array < int , 10 > a= { 42 , 9 , -1 , 18 , 59 , 3 , 101 , 31 , 72 , 12 };
 std::cout<<"wynik: "<<asum(a,n)<<"\n";
	while(i<n)
	{
	std::cout<<a[i]<<"\n";
	i++;
}
    return 0;
}

