#include <iostream>
using namespace std;

main()
{
    int arrSize = 4;
    string fruit[arrSize] = {"peach", "apple", "guava", "watermelon"};
    float price[arrSize] = {60, 70, 40, 30};
    string fruitIn="";
    float weight=0.0;

    cout << "Enter fruit you ant to buy: ";
    cin >> fruitIn;
    cout << "Enter quantity: ";
    cin >> weight;

    int index;
    for(int i=0;i<arrSize;i++)
    {
        if(fruitIn == fruit[i])
        {
            index=i;
        }
    }
    cout<<fruit[index]<<endl;
    float tprice=0.0;
    cout<<price[index]<<endl;
    tprice=price[index]*weight;

    cout<<"Your total bill is: "<<tprice;
}