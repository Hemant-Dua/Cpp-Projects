/*Area and Perimeter Calculator: Write a program that prompts the user for the length and width
(or radius for a circle) of a shape and then calculates and displays the area and perimeter 
(or circumference) of the shape.*/


#include <iostream>

using namespace std;

int main(){
    int length, breadth, peri, area;

    cout<<"Enter Length of the Rectangle: ";
    cin>>length;

    cout<<"Enter Breadth of the Rectangle: ";
    cin>>breadth;

    peri = 2*(length+breadth);
    area = length*breadth;

    cout<<"The Perimeter of the Rectangle: "<<peri<<endl;
    cout<<"The Area of the Rectangle: "<<area<<endl;
    
    return 0;
}