#include <iostream>
#include <string>


using namespace std;

class Hospital{
    private:
    string Hospital_N;
    int Max_Doctors;
    int Max_Patients;
    int Max_Nurses;

    int Num_Doctors;
    int Num_Patients;
    int Num_Nurses;


    public:
    
        void Hospital_Size(void)
    {
        cout<<"Edit Hospital"<<endl;
        cout<<"---------------------------------------"<<endl;

        cout<<"Pls Enter the Max Number of Doctors  : ";
        cin>>Max_Doctors;

        cout<<"Pls Enter the Max Number of Patients : ";
        cin>>Max_Patients;

        cout<<"Pls Enter the Max Number of Nurses   : ";
        cin>>Max_Nurses;     
        
    }

    void Add_Doctors(void)
    {
        static int counter=0;
        int i=0;

        cout<<"Pls Enter the Doctors Number : ";
        cin>>i;

        counter=counter+i;    


        if(Num_Doctors<=Max_Doctors&&counter<=Max_Doctors)
        {

            Num_Doctors=counter;
        }
        else
        {
        cout<<"No Need for Doctors."<<endl;        
        }



    }

    void Add_Patients(void)
    {
        static int counter=0;
        int i=0;

        cout<<"Pls Enter the Patients Number : ";
        cin>>i;

        counter=counter+i;    


        if(Num_Patients<=Max_Patients&&counter<=Max_Patients)
        {

            Num_Patients=counter;
        }
        else
        {
        cout<<"Hospital Complete."<<endl;        
        }
        
    }

    void Add_Nurse(void)
    {
        static int counter=0;
        int i=0;

        cout<<"Pls Enter the Nurse Number : ";
        cin>>i;

        counter=counter+i;    


        if(Num_Nurses<=Max_Nurses&&counter<=Max_Nurses)
        {

            Num_Nurses=counter;
        }
        else
        {
        cout<<"Staff Complete."<<endl;        
        }
        
    }

    void Hospital_Name(void)
    {
        static int counter=0;
        string Name;

        if(counter ==0)
        {
            cout << "Type your full name: ";
            cin>> Hospital_N;
            counter++;
        }
        else
        {
            cout << "Hospital has already name is "<< Hospital_N << endl;
        }

    }

    void Display_Hospital_Data(void)
    {
        int Num;
        cout<<"1- Hospital Capacity."<<endl<<"2-Doctors Numbers."<<endl<<"3-Patients Numbers."<<endl<<"4-Nurse Numbers."<<endl;
        cout<< "pls Enter Number : ";
        cin>> Num;

        switch(Num)
        {
            case 1:cout<<"Max Doctors :"<<Max_Doctors<<endl<<"Max Patients :"<<Max_Patients<<endl<<"Max Nurse :"<<Max_Nurses<<endl;break;
            case 2:cout<<"Number of Doctors : "<<Num_Doctors<<endl;break;
            case 3:cout<<"Number of Patients : "<<Num_Patients<<endl;break;
            case 4:cout<<"Number of Staff : "<<Num_Nurses<<endl;break;
            default:cout<<"Invalid Number ."<<endl;
            
        }

        

    }



};

int main()
{
    int x;
    char Exit;
    Hospital H1;

    cout<<"***********************************************************"<<endl;
    cout<<"***********************************************************"<<endl;
    cout<<"***************Welcome to Hospital System******************"<<endl;
    cout<<"***********************************************************"<<endl;
    cout<<"***********************************************************"<<endl;
    H1.Hospital_Size();
    do
    {
        cout<<"***********************************************************"<<endl;
        cout<<"***********************************************************"<<endl;

        cout<<"Options : "<<endl;
        cout<<"---------------------------------------"<<endl;

        cout<<"1- Enter Hopital Name"<<endl<<"2-Add Doctors."<<endl<<"3-Add Patients."<<endl<<"4-Add Nurse."<<endl<<"5-Display the Hospital Data."<<endl;
        cout<< "pls Enter Number : ";
        cin>> x;
        
        switch(x)
        {
            case 1:H1.Hospital_Name();break;
            case 2:H1.Add_Doctors();break;
            case 3:H1.Add_Patients();break;
            case 4:H1.Add_Nurse();break;
            case 5:H1.Display_Hospital_Data();break;
            default:cout<<"Invalid Input"<<endl;
        }

        cout<< "Press Y or y to Exit : ";
        cin>> Exit;


    } while (Exit=='N'||Exit == 'n');
    



}
