#include <iostream>
#include <vector>


auto is_palindrome(std::string palindrome) -> bool
{
    for (int i=1; i<=palindrome.size(); i++)
    {
        if(palindrome[i-1] != palindrome[palindrome.size() - i])
        {
            return false;
        }
    }
    return true;
}

auto filter_palindromes(std::vector <std::string> wejscie) -> std::vector <std::string>
{
    std::vector <std::string> wyjscie;
    for(int i=0; i<wejscie.size(); i++)
    {
        if(is_palindrome(wejscie[i]))
            wyjscie.push_back(wejscie[i]);

    }
    return wyjscie;
}
int main()
{
    std::vector <std::string> palindrom= {" cos "," anna "," cos "," kajak "," cos "," oooooo "}, filter;
    filter=filter_palindromes(palindrom);
       for(int i=0;i<filter.size();i++)
       {
           std::cout<<filter[i];

       }
    return 0;
}
