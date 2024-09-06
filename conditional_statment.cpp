#include<iostream>
using namespace std;

int main()
{
    int n1,n2,ch;

        cout<<"Enter first number :";
        cin>>n1;

        cout<<"Enter second number :";
        cin>>n2;

        cout<<"Choice :"<<endl;
        cout<<"1.Addition :"<<endl;
        cout<<"2.Subtraction :"<<endl;
        cout<<"3.Multiplication:"<<endl;
        cout<<"4.Division :"<<endl;
        
        cout<<"Enter your choice :";
        cin>>ch;

        if(ch == 1)
        {
            cout<<"Your addition is :"<<n1 + n2<<endl;
        }
        else if(ch == 2)
        {
            cout<<"Your Subtraction is :"<<n1 - n2<<endl;
        }
        else if(ch == 3)
        {
            cout<<"Your Multiplication is :"<<n1 * n2<<endl;
        }
        else if(ch == 4)
        {
            cout<<"Your Division is :"<<n1 / n2<<endl;   
        }
        else
        {
            cout<<"Invalid choice."<<endl;
        }    
}