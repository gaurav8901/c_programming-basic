#include<iostream>
using namespace std;

template <class T>
class Student
{
    T marks1;
    T marks2;
    public:
    Student(T m1, T m2)
    {
        marks1 = m1;
        marks2 = m2;
    }
    T total()
    {
        return marks1 + marks2;
    }
};

int main()
{
    Student<int> s1(45, 50);
    Student<float> s2(47.5, 56.4);
    cout<<"total marks of student 1 "<<s1.total()<<endl;
    cout<<"total marks of student 2 "<<s2.total()<<endl;
    return 0;
}
