//encapsulation is the process of binding data in a single function which cannnot be accessed. It can only be accessed by the object of the function.
//In the case of cpp, its the class as the function and the object of the class is the only thing that can access the elements of the class.
//In this class, the data are private and hence protected from the rest of the program.

//a simple example to demonstrate encapsulation in c++


#include <iostream>
using namespace std;

class Encapsulation
{
    private:
    int bankaccinfo;
    public:
    void display()
    {
        cout<<"Your credit card number is: "<<bankaccinfo;
    }
};

int main()
{
    Encapsulation aryn;
    aryn.display();
}

//In this above program. Encapsulation is a class where there are important information stored and this class can only be accessed by aryn which is an object of the class.
