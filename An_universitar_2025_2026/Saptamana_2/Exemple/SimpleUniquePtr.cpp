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

    UniquePtrCustom& operator=(UniquePtrCustom&& other)
    {
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
}