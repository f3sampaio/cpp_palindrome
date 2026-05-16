#include <iostream>
#include <string>
#include "palindrome.h"

using namespace std;
int main() {
    string s;
    Palindrome p;
    std::cout << "Enter a string: ";
    std::cin >> s;
    
    if(p.isPalindrome(s)) {
        std::cout << "Yes" << std::endl;
    } else {
        std::cout << "No" << std::endl;
    }
    return 0;
}