#include <iostream>
auto pierwsza(int a)
{
    bool x = true;

    if(a==1||a==0)
    {
        return 0;
    }
    else
    {
        for(int i=2; i<a; i++)
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
int main()
{
int d=1;
while(d<=2){
for(int i=1; i<=20; i++)
{
    if(pierwsza(i)==0)
        continue;
    std::cout<< pierwsza(i) << " ";
    if(i==19)
        std::cout<< "\n";
}
    d++;
}
}
