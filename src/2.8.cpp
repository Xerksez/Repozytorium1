#include <iostream>
#include <vector>
#include <string>

struct student
{
    std::string imie;
    std::vector<int> oceny;
    double average_of();
};

auto average_of(student A) -> float
{
    int x = 0;
    for(int i = 0; i < A.oceny.size(); i++)
    {
        x = x + A.oceny[i];
    }
    return float(x)/float(A.oceny.size());
}
struct group
{
    std::string nazwa;
    std::vector<student> studenci;
};

auto add_to_group(group & gru,student & stu) -> void
{
    gru.studenci.push_back(stu);
}

auto best_group_name(std::vector<group>grup)-> group
{
    std::vector<float> srednia;
    for(int i=0;i<group.size();i++)
    {
        for(int j=0;j<group[j].studenci.size();j++) //PoMoCY!!!!!!!!!
        {
            average_of(studenci[j].oceny);
            }
    }
}

int main()
{

        auto Mati=student();
    {
        Mati.imie="Mati";
        Mati.oceny= {1,1,1};
    }

    auto Hubert=student();
    {
        Hubert.imie="Hubert";
        Hubert.oceny= {3,3,3};
    }

    auto Piotrek=student();
    {
        Piotrek.imie="Piotrek";
        Piotrek.oceny= {4,4,4};
    }

     auto Kuba=student();
    {
        Kuba.imie="Kuba";
        Kuba.oceny= {4,4,4};
    }

    auto grupa1 =group();
    {
        grupa1.nazwa="grupa1";
        grupa1.studenci={Mati,Hubert};
    }
    auto grupa2 =group();
    {
        grupa2.nazwa="grupa2";
        grupa2.studenci={Piotrek,Kuba};
    }

          auto testowy1=student();
    {
        testowy1.imie="testowy z grupy 1";
        testowy1.oceny= {1,1,2,3,1,1};
    }

            auto testowy2=student();
    {
        testowy2.imie="testowy z grupy 2";
        testowy2.oceny= {1,1,2,3,1,1};
    }
add_to_group(grupa1,testowy1);
add_to_group(grupa2,testowy2);

    std::cout<<"Grupa 1:";
    for(int i=0;i<grupa1.studenci.size();i++)
        std::cout<<grupa1.studenci[i].imie<<" ";

    std::cout<<"\n Grupa 2:";
  for(int i=0;i<grupa2.studenci.size();i++)
        std::cout<<grupa2.studenci[i].imie<<" ";














}
