#include <iostream>

class ExempluClasa
{
    int exemplu;

    public:
        void DoWork()
        {
            std::cout << "Munceste clasa\n"; 
        }
};
struct ExempluStruct
{
    int exemplu;

    public:
        void DoWork()
        {
            std::cout << "Munceste struct\n";
        }
};

int main()
{
    ExempluClasa exempluObiect1;
    ExempluStruct exempluObiect2;

    //TO DO testati acest cod si vedeti ce se intampla 
    //std::cout << exempluObiect1.exemplu;
    //std::cout << exempluObiect2.exemplu;


    //Exemplu de apel de functii din ambele obiecte
    //Se poate observa ca ambele permit sa creezi functii care sa modifice obiectul
    exempluObiect1.DoWork();
    exempluObiect2.DoWork();
}