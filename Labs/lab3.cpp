#include <iostream>
#include <string>


using namespace std;

class School
{
    private:
    int Student_Number =0;
    int Max_Student =0;
    string School_Name;
    int Teacher_Num =0;

    public:
    void add_Max_student( int Num)
    {

            
            Max_Student= Num;
        
    }

    void add_Teacher()
    {
        Teacher_Num++;
    }

    void add_student()
    {
        if(Student_Number<Max_Student)
        {
            Student_Number++;
        }
        else
        {
        cout << "School is Full"<< endl;
        }
        
    }

    void School_name(string Name)
    {
        static int counter=0;

        if(counter ==0)
        {
            School_Name = Name;
            counter++;
        }
        else
        {
            cout << "School has already name is "<< School_Name << endl;
        }

    }

    void Display_School_Data()
    {
        
        cout << "Max Number of Students : " << Max_Student << endl;
        cout << "Students Number : " << Student_Number << endl;
        cout << "Teachers Numbers : " << Teacher_Num << endl;
        cout << "School Name : " << School_Name<< endl;
    }

};


int main()
{

    School sc1;
    sc1.add_Max_student(5);
    sc1.School_name("New School");
    sc1.Display_School_Data();

    sc1.add_student();
    sc1.add_student();
    sc1.add_student();
    sc1.add_student();

    sc1.add_Teacher();
    sc1.add_Teacher();
    sc1.add_Teacher();

    sc1.Display_School_Data();





}
