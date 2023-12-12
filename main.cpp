#include <iostream>

using namespace std;

int main()
{
    float km,meter,feet,inches;

    cout<<"enter the distance between two cities"<<endl;
    cin>>km;

    meter = km * 1000;
    feet = km * 3280.84;
    inches = km * 39370.1;

    cout<<"\nthe distance between two cities in meter is equal to "<<meter;
    cout<<"\nthe distance between two cities in feet is equal to "<<feet;
    cout<<"\nthe distance between two cities in inches is equal to "<<inches;
    return 0;
}
