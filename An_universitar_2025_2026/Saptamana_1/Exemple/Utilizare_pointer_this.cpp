#include <ios>
#include <iostream>

class ExempluThis
{
    public:

    ExempluThis(int varsta)
        :varsta(varsta)
    {
        this->varsta = varsta;
    }
    ExempluThis()
    {
        ExempluThis(100);
    }
    bool ComparaVarsta(int varsta)
    {
        return this->varsta >= varsta;
    }

    private:
    int varsta = 100;
    int exemplu = 0;
};

class Mostenire: public ExempluThis
{
    public:
    Mostenire()
    :ExempluThis(10)
    {
    }
};

int main()
{
    Mostenire andrei;
    ExempluThis obiect;
    std::cout << std::boolalpha;
    std::cout << obiect.ComparaVarsta(50);
}