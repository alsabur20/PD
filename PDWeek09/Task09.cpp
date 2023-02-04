#include <iostream>
using namespace std;

bool isInvalid(string pin);

main()
{
    int arrSize = 10;
    string dance[arrSize] = {"Shimmy", "Shake", "Pirouette", "Slide", "Box Step", "Headspin", "Dosado", "Pop", "Lock", "Arabesque"};
    string pin;
    cout << "Enter pin: ";
    cin >> pin;
    
    bool x=isInvalid(pin);
    if(x==false)
    {
        cout<<"Invalid Input";
        return 0;
    }
    int pin2 = stoi(pin);
    int d4 = pin2 % 10;
    int d3 = (pin2 / 10) % 10;
    int d2 = (pin2 / 100) % 10;
    int d1 = pin2 / 1000;

    int idx1, idx2, idx3, idx4;
    idx1 = (0 + d1)%10;
    idx2 = (1 + d2)%10;
    idx3 = (2 + d3)%10;
    idx4 = (3 + d4)%10;

    cout << dance[idx1] << ", " << dance[idx2] << ", " << dance[idx3] << ", " << dance[idx4];
}
bool isInvalid(string pin)
{
    bool x1=false,x2=false,x3=false,x4=false,x5=false;
    char c1=pin[0];
    char c2=pin[1];
    char c3=pin[2];
    char c4=pin[3];

    if(c1=='0'||c1=='1'||c1=='2'||c1=='3'||c1=='4'||c1=='5'||c1=='6'||c1=='7'||c1=='8'||c1=='9')
    {
        x1=true;
    }
    if(c2=='0'||c2=='1'||c2=='2'||c2=='3'||c2=='4'||c2=='5'||c2=='6'||c2=='7'||c2=='8'||c2=='9')
    {
        x2=true;
    }
    if(c3=='0'||c3=='1'||c3=='2'||c3=='3'||c3=='4'||c3=='5'||c3=='6'||c3=='7'||c3=='8'||c3=='9')
    {
        x3=true;
    }
    if(c4=='0'||c4=='1'||c4=='2'||c4=='3'||c4=='4'||c4=='5'||c4=='6'||c4=='7'||c4=='8'||c4=='9')
    {
        x4=true;
    }
    if(x1==true&&x2==true&&x3==true&&x4==true)
    {
        x5=true;
    }
    return x5;
}