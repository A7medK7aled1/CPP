#include <iostream>
#include <string>


using namespace std;




namespace gov 
{
    namespace city1
    {
        int students;
        int people;
        int workers;

        void edit( void )
        {
            
        
                cout<<"students = ";
                cin>>students;

                cout<<"people = ";
                cin>>people;

                cout<<"workers =";
                cin>>workers;
            

        }

        void print(void)
        {

                cout<<"students = "<<students<<endl;
            
                cout<<"people = "<<people<<endl;

                cout<<"workers = "<<workers<<endl;
            
        }

        void delete1(void)
        {
            students =0;
            people=0;
            workers=0;
        }

        




    } 

    namespace city2 
    {
        int students;
        int people;
        int workers;

        void edit( void )
        {
            
        
                cout<<"students = ";
                cin>>students;

                cout<<"people = ";
                cin>>people;

                cout<<"workers = ";
                cin>>workers;
            

        }

        void print(void)
        {

                cout<<"students = "<<students<<endl;
            
                cout<<"people = "<<people<<endl;

                cout<<"workers = "<<workers<<endl;
            
        }

        void delete1(void)
        {
            students =0;
            people=0;
            workers=0;
        }


    }

    namespace city3 
    {
        int students;
        int people;
        int workers;

        void edit( void )
        {
            
        
                cout<<"students = ";
                cin>>students;

                cout<<"people = ";
                cin>>people;

                cout<<"workers = ";
                cin>>workers;
            

        }

        void print(void)
        {

                cout<<"students = "<<students<<endl;
            
                cout<<"people = "<<people<<endl;

                cout<<"workers"<<workers<<endl;
            
        }

        void delete1(void)
        {
            students =0;
            people=0;
            workers=0;
        }

    }





}





template <typename T1,typename T2>
void sum(T1 city1,T2 city2)
{
    if((city1==1 && city2 ==2 )|| (city1==2&&city2==1))
    {
        cout<<"Total Students = "<<gov::city1::students + gov::city2::students<<endl;
        cout<<"Total people = "<<gov::city1::people + gov::city2::people<<endl;
        cout<<"Total workers = "<<gov::city1::workers + gov::city2::workers<<endl;
    }
    else if ((city1==1 && city2 ==3 )|| (city1==3&&city2==1))
    {
        cout<<"Total Students = "<<gov::city1::students + gov::city3::students<<endl;
        cout<<"Total people = "<<gov::city1::people + gov::city3::people<<endl;
        cout<<"Total workers = "<<gov::city1::workers + gov::city3::workers<<endl;
    }
    else if ((city1==2 && city2 ==3 )|| (city1==3&&city2==3))
    {
        cout<<"Total Students = "<<gov::city2::students + gov::city3::students<<endl;
        cout<<"Total people = "<<gov::city2::people + gov::city3::people<<endl;
        cout<<"Total workers = "<<gov::city2::workers + gov::city3::workers<<endl;
    }

}



int main()
{
    char y;
    int x,z,city1,city2;

    do
    { 
        cout <<"choose City:"<<endl<<"1-City1"<<endl<<"2-City2"<<endl<<"3-City3"<<endl;
        cin>> x;

        if(x==1)
        {
            cout <<"choose Options:"<<endl<<"1-edit"<<endl<<"2-print"<<endl<<"3-Delete"<<endl;
            cin>> z;
            if(z==1)
            {
                gov::city1::edit();
            }
            else if (z==2)
            {
                gov::city1::print();
            }
            else if (z==3)
            {
               gov::city1::delete1(); 
            }
        }
        else if(x==2)
        {
            cout <<"choose Options:"<<endl<<"1-edit"<<endl<<"2-print"<<endl<<"3-Delete"<<endl;
            cin>> z;
            if(z==1)
            {
                gov::city2::edit();
            }
            else if (z==2)
            {
                gov::city2::print();
            }
            else if (z==3)
            {
               gov::city1::delete1(); 
            }
        }
        else if(x==3)
        {
            cout <<"choose Options:"<<endl<<"1-edit"<<endl<<"2-print"<<endl<<"3-Delete"<<endl;
            cin>> z;
            if(z==1)
            {
                gov::city3::edit();
            }
            else if (z==2)
            {
                gov::city3::print();
            }
            else if (z==3)
            {
               gov::city1::delete1(); 
            }
        }



        cout<<"If u want to countiue press Y:";
        cin>> y;
    }
    while(y=='y'||y=='Y');


    cout <<"First City:";
    cin>> city1;

    cout <<"Second City:";
    cin>> city2;


     sum(city1,city2);




    


}