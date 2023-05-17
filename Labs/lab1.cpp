#include <iostream>

using namespace std;

namespace circle {

    void area(double r) {
        
        cout<<"circle area = "<< 3.14 * r * r<<endl ;
        cout<<"Perimeter circle= "<< 3.14 * r * 2<<endl ;
    }
}

namespace square {
    void area(int side) {
        cout<<"square area = "<<side * side<<endl;
        cout<<"Perimeter square= "<<  side * 4<<endl ;
    }
}

namespace triangle {
    void area(int base, int height) {
         cout<<"triangle area = "<< 0.5 * base * height<<endl;
         cout<<"Perimeter triangle= "<< 3 * base <<endl ;
    }
}


int main() {
 circle::area(5.0);
 square::area(4);
 triangle::area(3, 6);
  return 0;
}