/* Write a program to print the area and perimeter of a triangle having sides of 3, 4 
and 5 units by creating a class named 'Triangle' with a function to print the area and
perimeter.*/

#include<iostream>

using namespace std;

class Triangle
{

    public:
    int perimeter(int h, int l, int w)
    {
        int sum=l*h*w;
        cout<<sum;


    }

};




int main()
{
    Triangle obj;
    obj.perimeter(3,5,6);
    return 0;

}