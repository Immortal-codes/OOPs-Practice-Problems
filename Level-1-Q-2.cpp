/*Assign and print the roll number, phone number and address of two students having names "Sam" and "John" 
respectively by creating two objects of the class 'Student'. */

#include<iostream>

using namespace std;

class Student
{

    private:
    int rollno; string name; int phno;

    public:
    void setData(int rollno, string name, int phno);
    void getData()
    {
        cout<<name<<endl;
        cout<<phno<<endl;
        cout<<rollno<<endl;
    }

void Student ::setData(int z, int x, int y)
{
    rollno=x;
    name=y;
    phno=z;


}


};



int main()
{
    Student obj1;
    obj1.setData(1,"john",8979);
    obj1.getData();

   

}