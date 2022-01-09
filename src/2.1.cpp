#include <iostream>
#include <vector>


auto average_of(std::vector <int> w) -> double
{
    double temp;
    for(int i=0; i<w.size(); i++)
    {
        temp+=w[i];
    }
    double srednia = temp/w.size();
    return srednia;
}
int main()
{
    std::vector <int> srednia= {1,2,3};
    std::cout<<average_of(srednia);

}
