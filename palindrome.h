#ifndef PALINDROME_H
#define PALINDROME_H

#include <string>

class Palindrome {

    public:
    bool isPalindrome(std::string s) {
        for(int i = 0; i < s.length(); i++) {
            if(s[i] != s[s.length() - i - 1]) {
                return false;
            }
        }
        return true;
    }
};

#endif