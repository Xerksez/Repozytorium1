#include <iostream>
#include <vector>

auto dot_product(std::vector <int> a,std::vector <int> b) ->int
{
    int iloczyn;
    if(a.size()==b.size())
    {
    for(int i=0;i<a.size();i++)
    {
    iloczyn+=a[i]*b[i];
    }
    }
    return iloczyn;
}
int main()
{
    std::vector <int> a= {1,2,3,4,5,6};
    std::vector <int> b= {6,5,4,3,2,1};
    std::cout<<dot_product(a,b);
}
