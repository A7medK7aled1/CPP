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


            
};




class Student 
{
    private :
        string School;
        int GPA;
        
    public :



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
        
        cout<<"School Name : "<<School<<endl;
       cout <<"GPA : "<<GPA<<endl;
    }

            
};


class sport :public Student,public Person
{

    private :
        string Sport;
        int Wins;
        int loses;

    public :

    void add_Wins(int Num)
    {
        Wins=Num;
    }

    void add_Loses(int Num)
    {
        loses=Num;
    }

    void Set_Sport(string n)
    {
        Sport=n;
    }

    void Display()
    {
        Person::Display();
        Student::Display();
        cout<<"Sport : "<<Sport<<endl;
        cout<<"loses : "<<loses<<endl;
        cout<<"Wins : "<<Wins<<endl;
    }

};



int main ()
{
    sport s1;
    s1.add_age(25);
    s1.Set_Name("ahmed");
    s1.Type("Male");
    s1.add_GPA(3);
    s1.School_Name("Almadrassa");
    s1.add_Wins(5);
    s1.add_Loses(3);
    s1.Set_Sport("Football");


    s1.Display();



}