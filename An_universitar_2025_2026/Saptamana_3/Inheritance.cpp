#include <iostream>


class IAnimal
{
    
};

class Animal
{
    public:
        virtual void Mananca()
        {
            std::cout<<"Mananca";
        }
        virtual void BeaApa()
        {
            std::cout<<"Bea apa";
        }
        virtual void MergeLaBaie() = 0;
    private:
        void BeaSuc(){}
    protected:
        void BeaSucProtected(){}
};

class Leu: public Animal
{
    public:
        void Mananca() override
        {
            std::cout<<"mananca carne";
        }
        void MergeLaBaie() override 
        {

        }
        void TestApelPrivat()
        {
            this->BeaApa();
            this->Mananca();
            this->BeaSucProtected();
        }
    private:
};

void HranesteToateAnimalele(Animal& animalCurent)
{
    animalCurent.Mananca();
}

int main()
{
    Animal* Leoi =new Leu{};
    HranesteToateAnimalele(*Leoi);
}