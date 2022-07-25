# chdel
### Fast characters remover
## Usage

`echo "aboba" | chdel -n a`

Output:

`bob`

## Compilation

`g++ chdel.cpp -std=c++20 -o chdel -Ofast -fomit-frame-pointer -flto -march=native -mtune=native`
