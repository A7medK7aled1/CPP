#include <iostream>
#include <string>


using namespace std;

template <typename T,typename T2,typename T3>
T3 sum(T num1,T2 num2)
{
    cout<<"Result = "<<num1 + num2<<endl;
}

int main() {
  sum<int,int,int>(5,6);
  sum<char,int,int>('a',6);
  sum<string,string,string>("ok","NOK");
  sum<double,int,double>(5.3,6);


    return 0;
}