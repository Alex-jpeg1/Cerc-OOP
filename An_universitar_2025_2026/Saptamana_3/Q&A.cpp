#include <iostream>
#include <utility>
#include <vector>

class Test
{
    public:
        Test() { std::cout<< "Apelat constructor general\n";}
        Test(const Test& ) { std::cout << "Apel constructor copiere\n";}
        void operator=(const Test&){std::cout<< "Apel operator copiere\n";}
        Test(Test&&) {std::cout<< "apel constructor move\n";}
        void operator=(Test&&){std::cout<<"apel operator move\n";}
};

class ExempluExplicit
{
    public:
        explicit ExempluExplicit(int t){std::cout<<"AICI Exemplu";}
};

void Afisare(ExempluExplicit val)
{
    ///
}

int main()
{
    std::vector<int> sclav;
    Test exemplu1{};
    Test exemplu2{};
    Test exemplu3 = exemplu2;
    Test exemplu4;
    Test exemplu5;

    exemplu5 = exemplu4;

    Test exemplu6;
    exemplu6 = std::move(exemplu4);
    Afisare(ExempluExplicit(10));

    //delete reinterpret_cast<void *>(7);
}