#include<iostream>
#include <type_traits>
#include<vector>
#include<string>
#include<climits>
using namespace std;

class AbstractExample
{
    public:
        virtual void Exemplu() = 0;
        void Exemplu1()
        {
            cout<<"Aici avem implementare";
        }

    protected:
        int val = 0;
};

class AbstractImplementation:public AbstractExample
{
    public:
        virtual void Exemplu() override
        {
            cout<<"Implementat";
        }
    private:
        int val1 = 0;
};

class AltaImplementare: public AbstractExample
{
    public:
        virtual void Exemplu() override
        {

        }
};
void functie(AbstractExample* exemplu)
{
    AbstractImplementation* newObject = dynamic_cast<AbstractImplementation*>(exemplu);

    if(newObject == nullptr)
    {
        cout<<"Alt tip pasat";
    }
}



int main()
{

    AbstractExample* exemplu = new AbstractImplementation;
    AbstractImplementation* val = new AbstractImplementation;
    AltaImplementare* val1 = new AltaImplementare;

    int nr = INT_MIN;
    unsigned nr1 = static_cast<unsigned>(nr);
    cout<<nr1<<'\n';
    functie(val1);
}