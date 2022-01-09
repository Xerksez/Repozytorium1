#include <iostream>
#include <string>

auto is_palindrome(std::string palindrom) -> bool
{
    int result = 1;
    for (int i=1;i<=palindrom.size(); i++){
        if(palindrom[i-1] != palindrom[palindrom.size() - i]){
            result=0;
            break;
        }
    }
    return result;
}

int main()
{

std::cout<<is_palindrome("kajak");
std::cout << std::endl;
std::cout<<is_palindrome("niekajak");
return 0;
}
