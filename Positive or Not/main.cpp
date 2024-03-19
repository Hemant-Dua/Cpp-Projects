/*Positive, Negative, or Zero:  Write code that takes a number as input and determines
 if it's positive, negative, or zero.*/

#include <iostream>

using namespace std;

int main(){
    int num;

    cout<<"Enter your number: ";
    cin>>num;

    if (num > 0){
        cout<<"The Number is Positive."<<endl;
    }
    else if (num < 0){
        cout<<"The Number is Negative."<<endl;
    }
    else if (num == 0){
        cout<<"The Number is Zero."<<endl;
    }
    else{
        cout<<"Invalid Value"<<endl;
    }
}