# Palindrome
Small CLI that reads a string and prints whether it is a palindrome.
## Requirements
- A C++17 compiler ([LLVM Clang](https://clang.llvm.org/) `clang++` or [GCC](https://gcc.gnu.org/) `g++`)
- On macOS, Xcode Command Line Tools provide `clang++`
## Build
From this directory (`palindrome/`):
**Clang (macOS / LLVM)**
```bash
clang++ -std=c++17 -Wall -Wextra -pedantic -o palindrome main.cpp
GCC

g++ -std=c++17 -Wall -Wextra -pedantic -o palindrome main.cpp
The executable is named palindrome. Change the argument after -o if you want a different output name.

Run
./palindrome
Enter a string when prompted; the program prints Yes or No.

Project layout
File	Role
main.cpp
Entry point (main)
palindrome.h
Palindrome class (include guard, header-only)
Only main.cpp is passed to the compiler; it includes palindrome.h for the class.