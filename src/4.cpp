#include <iostream>
#include <string>
int main()
{
    int i=0;
    std::string imie;
    std::string imie1;
    std::string imie2;
    std::string imie3;
    std::string imie4;
    std::cout<<"Podaj 1 imie"<<"\n";
    std::cin>> imie;
    std::cout<<"Podaj 2 imie"<<"\n";
    std::cin>> imie1;
    std::cout<<"Podaj 3 imie"<<"\n";
    std::cin>> imie2;
    std::cout<<"Podaj 4 imie"<<"\n";
    std::cin>> imie3;
    std::cout<<"Podaj 5 imie"<<"\n";
    std::cin>> imie4;
    if(imie[imie.size()-1]=='a'){
        i++;
    }
    if(imie1[imie1.size()-1]=='a'){
        i++;
    }
    if(imie2[imie2.size()-1]=='a'){
        i++;
    }
    if(imie3[imie3.size()-1]=='a'){
        i++;
    }
    if(imie4[imie4.size()-1]=='a'){
        i++;
    }
    std::cout<<"Jest "<< i << " dziewczyn i "<< 5-i <<" chlopcow";

}
