// Analyse this program and use " Virtual " Keyword to avoid diamond problem.
#include <iostream>

using namespace std;

class Person
{
    //data members of person
public:
    Person ()
    {
        cout<<"Person";
    }
    Person(int x)
    {
        cout << "Person" << x << "Called" << endl;
    }
};
class Faculty : virtual public Person
{
    //data members of faculty
public:
    Faculty(int x) : Person(x)
    {
        cout << "Faculty" << x << "Called" << endl;
    }
};
class Student : virtual public Person
{
    //data member of faculty
public:
    Student(int x) : Person(x)
    {
        cout << "Student" << x << "Called" << endl;
    }
};
class TA : public Faculty, public Student
{
public:
    TA(int x) : Person(x), Faculty(x), Student(x)
    {
        cout << "TA" << x << "Called" << endl;
    }
};
int main()
{
    TA ta1(30);
    return 0;
}
