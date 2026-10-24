#include <iostream>
using namespace std;

class Father
{
public:
    virtual void show()
    {
        cout << "Father class" << endl;
    }
};

class Child : public Father
{
public:
    void show()
    {
        cout << "Child class" << endl;
    }
};

int main()
{
    Father *ptr;
    Child c;

    ptr = &c;
    ptr->show();

    return 0;
}
