#include <cstddef>

struct Puncte2
{
    int x;
    int y;  
};

class PracticiBuneMembriDate
{
    public:
    int Exemplu1;
    protected:
    int exemplu2;
    private:
    int Exemplu;
};
class ExempluMostenire: public PracticiBuneMembriDate
{
    public:
    void FaTreaba()
    {
        exemplu2 = 10;
        //Exemplu = 100;
    }
};
class IBazaDate
{
    public:
    virtual void InterogheazaBaza() = 0;
    private:
    
};

class IBazaDate2: public IBazaDate
{
    public:
    virtual void InterogheazaBaza() override{}
    virtual void InterogheazaBaza2() = 0;
};

class BazaDateText:public IBazaDate
{
    virtual void InterogheazaBaza() override {}
};

int main()
{
    ExempluMostenire milog;
    //milog.exemplu2;
}