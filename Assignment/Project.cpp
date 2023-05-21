#include <iostream>
#include <string>

using namespace std;

class Material
{
    private:
    int Thermal_Tolerance;
    string Material_Type;
    bool Material_Flexibility;

    public:
    Material():Thermal_Tolerance(50),Material_Type("liquid"),Material_Flexibility(false) {}
    void Thermal(int Num)
    {
        Thermal_Tolerance=Num;
    }

    void Matter_Type(string Type)
    {
        Material_Type=Type;
    }

    void Matter_Type(bool Type)
    {
        Material_Type=Type;
    }

    virtual  void Display()
    {
        cout << "Thermal_Degree : " << Thermal_Tolerance << endl;
        cout << "Matter Type  : " << Material_Type  << endl;
        cout << "Flexibility : " << Material_Flexibility << endl;
    }


};


class Non_Living : public Material
{
    private:
    string Name_M;
    bool Avaliable;
    public:
    Non_Living():Name_M("Rock"),Avaliable(true) {}
    void SetName(string Name)
    {
        Name_M=Name;
    }

    void SetAvaliable(bool Availability)
    {
        Avaliable=Availability;
    }

    void Display()
    {

        Material::Display();
        cout << "Name : " << Name_M << endl;
        cout << "Availability : " << Avaliable << endl;
    }

};



class Living : public Material
{
    private:
    string Name_M;
    bool Movment;
    public:
    Living():Name_M("Bird"),Movment(false){}
    void SetName(string Name)
    {
        Name_M=Name;
    }

    void SetAvaliable(bool Move)
    {
        Movment=Move;
    }

    void Display()
    {

        Material::Display();
        cout << "Name : " << Name_M << endl;
        cout << "Movment : " << Movment << endl;
    }

};


class Animal: public Living
{
    private:
    bool Extinct_Animal;
    bool Predator_Animal;

    public:

    Animal():Extinct_Animal(true),Predator_Animal(false){}
    void SetLiveorNot(bool Live)
    {
        Extinct_Animal=Live;
    }

    void SetPredator(bool Predator)
    {
        Predator_Animal=Predator;
    }

    void Display()
    {
        Living::Display();

        cout << "Extinct : " << Extinct_Animal << endl;
        cout << "Predator : " << Predator_Animal << endl;
    }


};


class Plant:public Living
{
    private:
    bool Extinct_Plant;
    bool Fruitful_Plant;

    public:

    Plant():Extinct_Plant(true),Fruitful_Plant(false) {}
    void SetLiveorNot(bool Live)
    {
        Extinct_Plant=Live;
    }

    void SetFruit(bool Fruit)
    {
        Fruitful_Plant=Fruit;
    }

    void Display()
    {
        Living::Display();
        cout << "Extinct : " << Extinct_Plant << endl;
        cout << "Fruit : " << Fruitful_Plant << endl;
    }


};


class Mammel: public Animal
{
    private:
    string Living_Place;
    int Life_Time;
    public:
    Mammel():Living_Place("Earth"),Life_Time(20)
    {

    }

    void SetPlace(string Name)
    {
        Living_Place=Name;
    }
    void SetTIme(int Time)
    {
        Life_Time=Time;
    }

    void Display()
    {
        Animal::Display();
        cout << "Living Place : " << Living_Place << endl;
        cout << "Age : " << Life_Time << endl;

    }


};

class Humman:public Mammel
{
    private:
    string Name_M;
    int Age;
    int Height;

    public:
    Humman():Name_M("ahmed"), Age(23), Height(186)
    {

    }
    void SetName(string Name)
    {
        Name_M=Name;
    }
    void SetAge(int Age)
    {
        Age=Age;
    }
    void SetHeight(int Height)
    {
        Height=Height;
    }

    void Display()
    {
        Mammel::Display();
        cout << "Name : " << Name_M << endl;
        cout << "Age : " << Age << endl;
        cout << "Height : " << Height << endl;
    }

};



int main()
{
    Humman H;
    H.Display();
}