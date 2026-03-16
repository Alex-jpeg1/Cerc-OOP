#include <ios>
#include <iostream>

class ExempluThis
{
    public:
    bool ComparaVarsta(int varsta)
    {
        return this->varsta >= varsta;
    }
    private:
    int varsta = 100;
};

int main()
{
    ExempluThis obiect;
    std::cout << std::boolalpha;
    std::cout << obiect.ComparaVarsta(50);
}