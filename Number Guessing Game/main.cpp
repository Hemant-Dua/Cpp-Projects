// Number Guessing Game: Write a program that generates a random number between 1 and 100 (or any custom range).
// The program prompts the user to guess the number. After each guess, provide feedback like "Higher", "Lower", or
//"Correct" until the user guesses the right number.

#include <iostream>
#include <random>

using namespace std;

int main()
{
    random_device rd;
    uniform_int_distribution<int> dist(1,100);

    int random_no = dist(rd);

    int guess;
    
    while (true){
        cout<<"Enter a number between 1 and 100: ";
        cin>>guess;
        if (guess == random_no){
            cout<<"Correct";
            break;
        }
        else if (guess > random_no){
            cout<<"lower"<<endl;
        }
        else if(guess < random_no){
            cout<<"higher"<<endl;
        }
    }

    cout<<"\nCongratulations";
    return 0;
}
