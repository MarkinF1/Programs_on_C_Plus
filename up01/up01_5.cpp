#include <iostream>


class Holder
{
    int value = 0;

public:
    Holder()
    {
        std::cin >> value;
    }

    ~Holder()
    {
        std::cout << value << std::endl;
    }

    void swap(Holder &other)
    {
        int tmp = value;
        value = other.value;
        other.value = tmp;
    }
};

int
main()
{
    int count;
    std::cin >> count;
    Holder a[count];
    for (int i = 0; i < count / 2; i++) {
        a[i].swap(a[count - i - 1]);
    }
    return 0;
}
