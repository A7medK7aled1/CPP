#include <iostream>
#include <string>

using namespace std;
class Shape {
public:
    virtual void calculateArea()  = 0;
    virtual void func_1()  = 0;

    virtual ~Shape() {} 
};

class Rectangle : public Shape {
private:
    int length;
    int width;

public:
    Rectangle(int l, int w) : length(l), width(w) {}

    void calculateArea()   {
        cout << "Rectangle Area = " << (width * length) << endl;
    }

    void func_1()   {
        cout << "func_1 Rectangle" << endl;
    }
};

class Circle : public Shape {
private:
    int radius;

public:
    Circle(int r) : radius(r) {}

    void calculateArea()   {
        cout << "Circle Area = " << (3.14 * radius * radius) << endl;
    }

    void func_1()   {
        cout << "func_1 Circle" << endl;
    }
};


int main() {
    Rectangle r1(5, 6);
    Circle c1(5);

    r1.calculateArea();
    c1.calculateArea();

    r1.func_1();
    c1.func_1();

    return 0;
}
