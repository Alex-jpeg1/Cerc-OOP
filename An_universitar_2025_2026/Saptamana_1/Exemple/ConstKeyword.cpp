#include <cstddef>
#include <iostream>

class ConstUsage
{
    public:
        ConstUsage(){}

        ConstUsage(const ConstUsage& other):
            Test{other.Test}
        {
            std::cout << "Copy Constructor apelat\n";
        }

        ConstUsage& operator=(const ConstUsage& other)
        {
            std::cout<< "Folosit Copy operator\n";
            
            if(this == &other)
            {
                return *this;
            }

            this->Test = other.Test;
            return *this; 
        }
        void ApelFunctie() const 
        {
            std::cout << "Functia const apelata\n";
        }
        void ApelFunctie()
        {
            std::cout << "Functia non-const apelata\n";
        }
        char& operator[](std::size_t poz)
        {
            std::cout << "Apel pe operator[] non const\n";
            return const_cast<char &>(static_cast<const ConstUsage>(*this)[poz]);
        }
        const char& operator[](std::size_t poz) const
        {
            std::cout << "Apel pe operator[] const\n";
            return Test[poz];
        }


        void afiseazaDate()
        {
            static_cast<const ConstUsage>(*this).afiseazaDate();
        }
        void afiseazaDate() const
        {
            std::cout << Test<< '\n' ;
        }
    private:
        std::string Test = "test";
};

int main()
{
    Const_vs_Nonconst_Calls:
    {
        const ConstUsage ConstObject;
        ConstUsage NonConstObject;

        ConstObject.ApelFunctie();
        NonConstObject.ApelFunctie();

        ConstObject[0];
        NonConstObject[0] = 'L';

        ConstObject.afiseazaDate();
        NonConstObject.afiseazaDate();
    }
}