#include <iostream>
#include <string>


using namespace std;

class School
{
    private:
    int Student_Number =0;
    int Max_Student =0;


    public:

    School(int x)
    {
        Max_Student=x;
        
    }
    int display()
    {
       cout<<"Max Number ="<<Max_Student<<endl; 
    }

    ~School()
    {
        cout<<"End"<<endl;
    }
};


int main()
{
    School sc1(5);
    sc1.display();

}