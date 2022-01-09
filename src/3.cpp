#include <iostream>
#include <string>
using namespace std;

int main()
{
    std::string imie;
    std::string imie1;
    std::cout<<"Podaj pierwsze imie: "<<"\n";
    std::cin>> imie;
    std::cout<<"Podaj drugie imie: "<<"\n";
    std::cin>> imie1;
    if(imie.size() > imie1.size()){
        std::cout<<"Imie 1 jest dluzsze niz 2!";
    }
    else if(imie.size() < imie1.size()){
        std::cout<<"Imie 2 jest dluzsze niz 1...";
    }
    else{
        std::cout<<"imiona maja taka sama dlugosc.";
    }

return 0;
}
