#include <iostream>
#include <vector>
#include <string>
struct student
{
    std::string imie;
    std::string nazwisko;
    std::vector<int> oceny;
    double average_of();
};

double student::average_of()
{
    double temp;
    for(int i=0; i<oceny.size(); i++)
    {
        temp+=oceny[i];
    }
    double srednia = temp/oceny.size();
    return srednia;
}

int main()
{
    auto Hubert=student();
{
        Hubert.imie="Hubert";
        Hubert.nazwisko="Labuda";
        Hubert.oceny={5,5,6,4,6,4,4};
}

//double srednia=Hubert.average_of(Hubert.oceny);

    std::cout<<Hubert.imie<<" "<<Hubert.nazwisko<<" Srednia ocen to: "<<Hubert.average_of() ;
    return 0;
}
