//Avand in vedere faptul ca in aceasta saptamana s-a discutat despre modificatori de acces si pointerul this 
//O provocare adecvata ar fi sa se implementeze o clasa Om in care sa aiba membri varsta si nume. 
//varsta se va da implicit la fel pentru toate obiectele
//Ca metode pe clasa sa existe o functie care returneaza varsta si o metoda care returneaza numele.
//O alta metoda care sa fie prezenta este una de modificare a numelui 
//O ultima metoda sa fie una care sa fie denumita SerbareZiDeNastere() in care sa se incrementeze varsta (se presupune ca e apelata 
// doar in ziua de nastere nu e nevoie de implementarea unor sigurante care sa verifice daca ziua sa de nastere este chiar in acea zi)


//Template
#include <iostream>
#include <string>

//TO DO implementati aceste metode folosind pointerul this plus orice alte metode de care aveti nevoie in campul private
//In clasa om singurele metode ce pot fi apelate raman cele deja scrise
class Om
{
    public:

        int GetVarsta();
        std::string GetNume();
        void SchimbaNume();
        void SerbareZiDeNastere();

    private:
        int varsta;
        std::string nume; 
};

int main()
{
    Om om1;

    om1.GetVarsta();
    om1.GetNume();
    om1.SchimbaNume();
    om1.SerbareZiDeNastere();
}