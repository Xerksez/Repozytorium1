#include <iostream>
#include <vector>
#include <string>

struct student
{
    std::string imie;
    std::string nazwisko;
    std::vector<int> oceny;

};

auto split(std::string str, std::vector <std::string> & vec) ->std::vector <std::string>
{
    std::string chwilowe ="";
    for(int i=0;i<str.size();i++)
    {

    if(str[i]==' ')
    {
        vec.push_back(chwilowe);
        chwilowe ="";
    }
    else
    {
    chwilowe.push_back(str[i]);
    }
    }
    vec.push_back(chwilowe);
    return vec;
}
int main()
{

    std::vector<std::string> zesplitowane;
    split("Ala ma kota",zesplitowane);
    for(int i=0;i<zesplitowane.size();i++)
    std::cout<<"'"<<zesplitowane[i]<<"'"<<",";
    return 0;
}
