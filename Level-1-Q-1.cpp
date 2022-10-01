/* Create a class named 'Student' with a string variable 'name' and an integer variable 'roll_no'.
Assign the value of roll_no as '2' and that of name as "John" by creating an object of the class Student.*/

#include <iostream>

using namespace std;

class Student
{
public:
    string name;
    int rollno;
};

int main()
{

    Student obj;
    obj.name = "john";
    obj.rollno = 2;

    cout << obj.name << endl;
    cout << obj.rollno << endl;
}