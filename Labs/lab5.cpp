#include <iostream>
#include <string>


using namespace std;


class Num
{
    public :
            int value;


    Num(int x):value(x)
    {

    }

    Num operator --()
    {
        int temp=value;
        --temp;
        return Num(temp);
    }

    Num operator ++()
    {
        int temp=value;
        ++temp;
        return Num(temp);
    }
    Num operator ++(int)
    {
        int temp=value;
        temp++;
        return Num(temp);
    }
};

int main()
{
    Num V1(8);
    Num V2(6);
    Num V3(0);
    cout<<"before : "<<endl;

    cout<<"V1 ="<<V1.value<<endl;
    cout<<"V2 ="<<V2.value<<endl;
    cout<<"V3 ="<<V3.value<<endl;
    
    
    V1=--V2;
    V3=++V1;
    V2=V3++;

    cout<<"after : "<<endl;
    cout<<"V1 ="<<V1.value<<endl;
    cout<<"V2 ="<<V2.value<<endl;
    cout<<"V3 ="<<V3.value<<endl;
    



}

