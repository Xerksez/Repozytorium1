#include <iostream>
#include <time.h>
#include <windows.h>
#include <cstdlib>
#include <conio.h>
#include <locale.h>
#include <string>

auto liczby_w_tabeli(int b[],int i[],int n[],int g[],int o[])
{
    for(int j=0; j<5; j++)
    {
        b[j]=( std::rand() % 15 ) + 1;
        i[j]=( std::rand() % 15 ) + 16;
        n[j]=( std::rand() % 15 ) + 31;
        g[j]=( std::rand() % 15 ) + 46;
        o[j]=( std::rand() % 15 ) + 61;
        while(b[j]==b[j-1]||b[j]==b[j-2]||b[j]==b[j-3]||b[j]==b[j-4])
            b[j]=( std::rand() % 15 ) + 1;
        while(i[j]==i[j-1]||i[j]==i[j-2]||i[j]==i[j-3]||i[j]==i[j-4])
            i[j]=( std::rand() % 15 ) + 16;
        while( n[j]==n[j-1]||n[j]==n[j-2]||n[j]==n[j-3]||n[j]==n[j-4])
            n[j]=( std::rand() % 15 ) + 31;
        while( g[j]==g[j-1]||g[j]==g[j-2]||g[j]==g[j-3]||g[j]==g[j-4])
            g[j]=( std::rand() % 15 ) + 46;
        while(  o[j]==o[j-1]||o[j]==o[j-2]||o[j]==o[j-3]||o[j]==o[j-4])
            o[j]=( std::rand() % 15 ) + 61;
    }
}


auto czy_koniec(int b[],int i[],int n[],int g[],int o[])
{
int liczba=0;
     if(b[0]==0&&b[1]==0&&b[2]==0&&b[3]==0&&b[4]==0)
            {
                liczba=liczba+1;

            }

            if(i[0]==0&&i[1]==0&&i[2]==0&&i[3]==0&&i[4]==0)
            {
              liczba=liczba+1;
            }

            if(n[0]==0&&n[1]==0&&n[3]==0&&n[4]==0)
            {
               liczba=liczba+1;
            }

            if(g[0]==0&&g[1]==0&&g[2]==0&&g[3]==0&&g[4]==0)
            {
                liczba=liczba+1;
            }

            if(o[0]==0&&o[1]==0&&o[2]==0&&o[3]==0&&o[4]==0)
            {
               liczba=liczba+1;
            }

            if(b[0]==0&&i[1]==0&&g[3]==0&&o[4]==0)
            {
                liczba=liczba+3;
            }

            if(o[0]==0&&g[1]==0&&i[3]==0&&b[4]==0)
            {
              liczba=liczba+3;
            }

            if(b[0]==0&&i[0]==0&&n[0]==0&&g[0]==0&&o[0]==0)
            {
             liczba=liczba+5;
            }
            if(b[1]==0&&i[1]==0&&n[1]==0&&g[1]==0&&o[1]==0)
            {
               liczba=liczba+5;
            }

            if(b[2]==0&&i[2]==0&&g[2]==0&&o[2]==0)
            {
                liczba=liczba+5;
            }

            if(b[3]==0&&i[3]==0&&n[3]==0&&g[3]==0&&o[3]==0)
            {
              liczba=liczba+5;
            }

            if(b[4]==0&&i[4]==0&&n[4]==0&&g[4]==0&&o[4]==0)
            {
               liczba=liczba+5;
            }
            return liczba;
}

auto koniec(bool koniec_gry, bool poziom, bool pion, bool krzyz)
{
    if(koniec_gry==true)
    {
        std::cout<<"\n\nBINGO!!!! KONIEC GRY \n";
        if(poziom ==true&&krzyz==true)
        {
            poziom=false;
            krzyz=false;
            std::cout<<"WYGRANA W POZIOMIE I NA KRZYŻ";

        }

        if(poziom ==true&&pion==true)
        {
            poziom=false;
            pion=false;
            std::cout<<"WYGRANA W POZIOMIE I W PIONIE";

        }

        if(krzyz ==true&&pion==true)
        {
            krzyz=false;
            pion=false;
            std::cout<<"WYGRANA NA KRZYŻ I W PIONIE";

        }

        if(poziom==true)
        {

            std::cout<<"WYGRANA W POZIOMIE";


        }

        if(pion==true)
        {

            std::cout<<"WYGRANA W PIONIE";


        }
        if(krzyz==true)
        {

            std::cout<<"WYGRANA NA KRZYŻ";


        }
    }
}


auto wypelnianie(int l[],int s,int b[],int i[],int n[],int g[],int o[])
{

    if(l[s]==b[0])

    {
        b[0]=0;
        std::cout<<b[0]<<" ";
    }
    else
        std::cout<<b[0]<<" ";

    if(b[0]<10)
    {
        std::cout<<" ";
    }

    if(i[0]==0)
        std::cout<<i[0]<<"   ";
    else if(l[s]==i[0])
    {
        i[0]=0;
        std::cout<<i[0]<<"   ";
    }
    else
        std::cout<<i[0]<<"  ";

    if(n[0]==0)
        std::cout<<n[0]<<"   ";
    else if(l[s]==n[0])
    {
        n[0]=0;
        std::cout<<n[0]<<"   ";
    }
    else
        std::cout<<n[0]<<"  ";

    if(g[0]==0)
        std::cout<<g[0]<<"   ";
    else if(l[s]==g[0])
    {
        g[0]=0;
        std::cout<<g[0]<<"   ";
    }
    else
        std::cout<<g[0]<<"  ";

    if(o[0]==0)
        std::cout<<o[0]<<"   \n";
    else if(l[s]==o[0])
    {
        o[0]=0;
        std::cout<<o[0]<<" \n";
    }
    else
        std::cout<<o[0]<<"  \n";

    /////////////////////////////////////////////

    if(l[s]==b[1])
    {
        b[1]=0;
        std::cout<<b[1]<<" ";
    }
    else
        std::cout<<b[1]<<" ";

    if(b[1]<10)
    {
        std::cout<<" ";
    }

    if(i[1]==0)
        std::cout<<i[1]<<"   ";
    else if(l[s]==i[1])
    {
        i[1]=0;
        std::cout<<i[1]<<"   ";
    }
    else
        std::cout<<i[1]<<"  ";

    if(n[1]==0)
        std::cout<<n[1]<<"   ";
    else if(l[s]==n[1])
    {
        n[1]=0;
        std::cout<<n[1]<<"   ";
    }
    else
        std::cout<<n[1]<<"  ";

    if(g[1]==0)
        std::cout<<g[1]<<"   ";
    else if(l[s]==g[1])
    {
        g[1]=0;
        std::cout<<g[1]<<"   ";
    }
    else
        std::cout<<g[1]<<"  ";

    if(o[1]==0)
        std::cout<<o[1]<<"   \n";
    else if(l[s]==o[1])
    {
        o[1]=0;
        std::cout<<o[1]<<"  \n";
    }
    else
        std::cout<<o[1]<<"  \n";
///////////////////////////////////////////


    if(l[s]==b[2])
    {
        b[2]=0;
        std::cout<<b[2]<<" ";
    }
    else
        std::cout<<b[2]<<" ";

    if(b[2]<10)
    {
        std::cout<<" ";
    }
    if(i[2]==0)
        std::cout<<i[2]<<"   ";
    else if(l[s]==i[2])
    {
        i[2]=0;
        std::cout<<i[2]<<"   ";
    }
    else
        std::cout<<i[2]<<"  ";

    std::cout<<"0  "<<" ";

    if(g[2]==0)
        std::cout<<g[2]<<"   ";
    else if(l[s]==g[2])
    {
        g[2]=0;
        std::cout<<g[2]<<"   ";
    }
    else
        std::cout<<g[2]<<"  ";

    if(o[2]==0)
        std::cout<<o[2]<<"   \n";
    else if(l[s]==o[2])
    {
        o[2]=0;
        std::cout<<o[2]<<"  \n";
    }
    else
        std::cout<<o[2]<<"  \n";
//////////////////////////////////////////////
    if(l[s]==b[3])
    {
        b[3]=0;
        std::cout<<b[3]<<" ";
    }
    else
        std::cout<<b[3]<<" ";

    if(b[3]<10)
    {
        std::cout<<" ";
    }

    if(i[3]==0)
        std::cout<<i[3]<<"   ";
    else if(l[s]==i[3])
    {
        i[3]=0;
        std::cout<<i[3]<<"   ";
    }
    else
        std::cout<<i[3]<<"  ";

    if(n[3]==0)
        std::cout<<n[3]<<"   ";
    else if(l[s]==n[3])
    {
        n[3]=0;
        std::cout<<n[3]<<"   ";
    }
    else
        std::cout<<n[3]<<"  ";

    if(g[3]==0)
        std::cout<<g[3]<<"   ";
    else if(l[s]==g[3])
    {
        g[3]=0;
        std::cout<<g[3]<<"   ";
    }
    else
        std::cout<<g[3]<<"  ";

    if(o[3]==0)
        std::cout<<o[3]<<"   \n";
    else if(l[s]==o[3])
    {
        o[3]=0;
        std::cout<<o[3]<<"  \n";
    }
    else
        std::cout<<o[3]<<"  \n";
///////////////////////////////////////
    if(l[s]==b[4])
    {
        b[4]=0;
        std::cout<<b[4]<<" ";
    }
    else
        std::cout<<b[4]<<" ";

    if(b[4]<10)
    {
        std::cout<<" ";
    }

    if(i[4]==0)
        std::cout<<i[4]<<"   ";
    else if(l[s]==i[4])
    {
        i[4]=0;
        std::cout<<i[4]<<"   ";
    }
    else
        std::cout<<i[4]<<"  ";

    if(n[4]==0)
        std::cout<<n[4]<<"   ";
    else if(l[s]==n[4])
    {
        n[4]=0;
        std::cout<<n[4]<<"   ";
    }
    else
        std::cout<<n[4]<<"  ";

    if(g[4]==0)
        std::cout<<g[4]<<"   ";
    else if(l[s]==g[4])
    {
        g[4]=0;
        std::cout<<g[4]<<"   ";
    }
    else
        std::cout<<g[4]<<"  ";

    if(o[4]==0)
        std::cout<<o[4]<<"   \n";
    else if(l[s]==o[4])
    {
        o[4]=0;
        std::cout<<o[4]<<"  \n";
    }
    else
        std::cout<<o[4]<<"  \n";
}

char *tr(char *str)
{
    static char buff[256];
    char cp[]="\245\206\251\210\344\242\230\276\253\244\217\250\235\343\340\227\275\215ąćęłńóśżźĄĆĘŁŃÓŚŻŹ";
    if(strlen(str)>=sizeof(buff)) return str;
    char *bf=buff;
    while(*str)
    {
        char *pos=strchr(cp+18,*str);
        *(bf++)=pos?*(pos-18):*str;
        ++str;
    }
    *bf=0;
    return buff;
}
auto losowanie()
{

}

int main()
{

    setlocale(LC_CTYPE, "Polish");
    bool poziom, pion, krzyz;
    std::cout<<"Zdobądź 5 zer w jednej linii(poziomo, pionowo lub na krzyż), by wygrać. Uzyskaj jak najmniej ruchów i pochwal się wynikiem!. \n\n\n";;
    int N=1;
    srand( time( NULL ) );
    int l[76];
    bool koniec_gry=false;
    int b[5];
    int i[5];
    int n[5];
    int g[5];
    int o[5];
    int s;
    liczby_w_tabeli(b,i,n,g,o);
    while(1)
    {

        for(int d; d<1000; d++)
        {
            int T[N], s, licznik;
            licznik = 0;
            bool t;

            do
            {
                if(koniec_gry==true)
                    break;
                l[d]= 1 + rand() % 75;
                t = true;
                for(s = 0; s < licznik; s++)
                    if(l[d] == T[s] )
                    {
                        t = false;
                        break;
                    }
                if(t)
                {
                    T[s]=l[s] ;
                    licznik++;
                }
            }
            while(licznik < N);

            std::cout<<"B   I   N  G   O \n";
            wypelnianie(l,s,b,i,n,g,o);

            //KONIEC GRY!
int liczba=czy_koniec(b,i,n,g,o);
if(liczba==4)
{
    pion=1;
    krzyz=1;
    koniec_gry=1;

}
if(liczba==8)
{
    poziom=1;
    krzyz=1;
    koniec_gry=1;

}
if(liczba==6)
{
    pion=1;
    poziom=1;
    koniec_gry=1;

}

if(liczba==1)
{
    pion=1;
    koniec_gry=1;

}
if(liczba==3)
{

    krzyz=1;
    koniec_gry=1;

}
if(liczba==5)
{

    poziom=1;
    koniec_gry=1;

}
      //      std::cout<<koniec_gry<<"   "<<czy_koniec(b,i,n,g,o)<<" "<<s;
            if(koniec_gry==false)
            {
                std::cout<<"\n Twoje liczby: ";
                for(int i=0; i<N; i++)
                {
                    if(i==0)
                        Sleep(50);
                    std::cout << l[i]<< " ";
                    if(koniec_gry==true)
                        break;
                }
                N++;
            }
            else
            {
                koniec(koniec_gry,poziom,pion,krzyz);
                std::cout<<"\nIlość użytych liczb: "<<N;
            }

            if(getch())
                //getchar();
                system ("cls");

        }
    }
}
