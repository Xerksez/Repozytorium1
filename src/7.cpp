#include <iostream>

auto count_chars(std::string wyraz, char znak) -> int
{
 int d=0;
    for(int i=0;i<wyraz.size();i++)
    {
        if(wyraz[i]==znak)
    {
        d++;
    }
    }
    return d;
}
int main()
{
        std::cout<<count_chars("rabarbar",'a');
}
