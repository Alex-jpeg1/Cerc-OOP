#include<iostream>
#include<cstdint>
#include <sys/types.h>
template<typename t>
struct wrapper{};
//wrapper pentru a evita ambigous calls pe operatorul << template

template <typename t>
std::ostream& operator<<(std::ostream& out, wrapper<t>)
{
    out << sizeof(t) << '\n';
    return out;
}

//In c++ 

class Exemplu1
{
    uint32_t val0;
    uint32_t val1;
    uint64_t val2;
};

class Exemplu2
{
    uint32_t val0;
    uint64_t val1;
    uint32_t val2;
};

class Exemplu3
{
    uint64_t val0;
    uint32_t val1;
    uint32_t val2;
};

class Exemplu4
{
    uint32_t val0;
    uint16_t val1;
    uint64_t val2;
};

class Exemplu5
{
    Exemplu5(int val3)
    :_val3(val3),
    val1(_val3)
    {

    }
    u_char val0;
    uint64_t val1;
    u_char _val3 = 10;
};

int main()
{
    std::cout << wrapper<Exemplu1>();
    std::cout << wrapper<Exemplu2>();
    std::cout << wrapper<Exemplu3>();
    std::cout << wrapper<Exemplu4>();
    std::cout << wrapper<Exemplu5>();
}