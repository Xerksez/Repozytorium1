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

auto get_best_student(std::vector<student>stu) ->student
{
    double chwilowa=0;
    auto best =stu[0];
    for(int i=0; i<stu.size(); i++)
    {
        if(average_of(stu[i])>chwilowa)
        {
            chwilowa=average_of(stu[i]);
            best=stu[i];
        }
    }
    return best;
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

    std::vector<student> wszyscy= {Piotrek,Mati,Hubert};
    auto best=get_best_student(wszyscy);
    std::cout<<best.imie<<" jest kozakiem a jego srednia to:"<<average_of(best);
    return 0;
}
