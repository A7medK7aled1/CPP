#include <iostream>
#include <string>


using namespace std;


/* Base Class */
class Person
{

        string Name;
        int age;
        string type;
    public :

    Person(int Age_1,string Type,string Name_1):Name(Name_1),age(Age_1),type(Type)
    {
        cout<<"Hello  Person"<<endl;

    }

    void add_age(int Num)
    {
        age=Num;
    }

    void Set_Name(string n)
    {
        Name=n;
    }

    void Type(string n)
    {
        type=n;
    }


    virtual  void Display()
    {
        cout << "Name : " << Name << endl;
        cout << "Age  : " << age  << endl;
        cout << "Type : " << type << endl;
    }  

    ~Person()
    {
        cout<<"person Class"<<endl;
    }
            
};



class Student :public Person
{
    private :
        string School;
        int GPA;
        
    public :

    Student(string School_1,int GPA_Local,string Type_2,string Name_2,int Age ):GPA(GPA_Local),School(School_1),Person(Age,Name_2,Type_2)
    {
        cout<<"Hello  Student"<<endl;

    }

    void add_GPA(int Num)
    {
        GPA=Num;
    }

    void School_Name(string n)
    {
        School=n;
    }

    virtual void Display()
    {
        Person::Display();
        cout<<"School Name : "<<School<<endl;
       cout <<"GPA : "<<GPA<<endl;
    }

    ~Student()
    {
        cout<<"Student Class"<<endl;
    }
            
};








int main ()
{
    Student s1("AlMadrassa",2,"Ahmed","Male",22);


    s1.Display();



}
