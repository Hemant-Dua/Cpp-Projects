#include <iostream>

using namespace std;

int main(){
    double num1,num2;
    char opr;

    cout<<"Enter the 1st number: ";
    cin>>num1;

    cout<<"Enter the 2nd number: ";
    cin>>num2;

    cout<<"Enter the sign of operation to be done: ";
    cin>>opr;

    switch (opr)
    {
    case '+':
        cout<<num1<<" + "<<num2<<" = "<<num1+num2<<endl;
        break;
    case '-':
        cout<<num1<<" - "<<num2<<" = "<<num1-num2<<endl;
        break;
    case '*':
        cout<<num1<<" * "<<num2<<" = "<<num1*num2<<endl;
        break;
    case '/':
        cout<<num1<<" / "<<num2<<" = "<<num1/num2<<endl;
        break;
    default:
        cout<<"Invalid operator!"<<endl;
        break;
    }
    return 0;
}