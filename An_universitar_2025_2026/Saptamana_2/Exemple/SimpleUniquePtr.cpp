#include <utility>

class UniquePtrCustom
{
    public:
    UniquePtrCustom(int val)
    {
        data = new int(val);
    }

    UniquePtrCustom(const UniquePtrCustom&) = delete;
    void operator=(const UniquePtrCustom&) = delete;

    UniquePtrCustom(UniquePtrCustom&& other)
    {
        this->data = other.data;
        other.data = nullptr;
    }

    UniquePtrCustom& operator=(UniquePtrCustom&& other) //&&
    {
        if(this->data!=nullptr)
        {
            delete this->data;
        }
        this->data = other.data;
        other.data = nullptr;
        return *this;
    }

    ~UniquePtrCustom()
    {
        if(data != nullptr)
            delete data;
    }

    private:
    int *data;
};

int main()
{
    int* a = new int[100];
    delete[] a;

    UniquePtrCustom b(5);
    UniquePtrCustom c(10);

    b = std::move(c);
    b.operator=(std::move(c));
}