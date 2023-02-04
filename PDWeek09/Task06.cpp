#include<iostream>
using namespace std;

main()
{
    int arrSize=3;
    int array[arrSize];

    for(int i=0;i<arrSize;i++)
    {
        cout<<"Enter "<<i<<" element: ";
        cin>>array[i];
    }
    int number;
    cout<<"Enter number of times odd-even transformation needs to be done: ";
    cin>>number;

    for(int i=1;i<=number;i++)
    {
        if(array[0]%2==0)
        {
            array[0]=array[0]-2;
        }
        else
        {
            array[0]=array[0]+2;
        }
    }
    for(int i=1;i<=number;i++)
    {
        if(array[1]%2==0)
        {
            array[1]=array[1]-2;
        }
        else
        {
            array[1]=array[1]+2;
        }
    }
    for(int i=1;i<=number;i++)
    {
        if(array[2]%2==0)
        {
            array[2]=array[2]-2;
        }
        else
        {
            array[2]=array[2]+2;
        }
    }
    for(int i=0;i<arrSize;i++)
    {
        cout<<array[i]<<", ";
    }
}