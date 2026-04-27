#include <utility>
#include <iostream>

class DoesWork
{
    public:
        void DoesWorkPublic(){DoesWork2();};
        DoesWork(){}
        DoesWork(const DoesWork&)
        {

        }
        DoesWork& operator=(const DoesWork&)
        {
            return *this;
        }
        DoesWork(DoesWork&& other){}

        ~DoesWork(){}
    private:
        void DoesWork2()
        {
        }

};

int main()
{
    DoesWork ob1;

    DoesWork ob2{ob1};

    DoesWork ob3;

    ob3 = ob1;
    
    //int a = 2;

    {
        int *v = new int(10);

        delete v;
    }
    
    int* a = new int(1);

    delete a;

    //lvalue
    //rvalues
    
    int b = 10;
    const int &c = 10;

    const int& d = 100;

    b = std::move(d);

    std::cout<<d<<'\n';
    std::cout<<b;
}