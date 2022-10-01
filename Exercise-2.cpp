/* Write a program with a mother class and an inherited daugther class.
Both of them should have a method void display ()that prints a message (different for mother and daugther).
In the main define a daughter and call the display() method on it.*/

#include <iostream>

using namespace std;

class Mother
{
public:
    void display()
    {
        cout << "thi is Mother class" << endl;
    }
};

class Daughter : public Mother
{
    public:
    void display()
    {
        cout << "thi is Daughter class" << endl;
    }
};

int main()
{

    Daughter a;
    
    a.display();
}