#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main(){

    //Initalize random seed

    srand(static_cast<unsigned int >(time(0)));
    
    //Generate a random number between 1 to 100

    int  random_number = rand() % 100 + 1;
    int guess = 0;

    cout<<"I have  a number between 1 and 100. Try to guess it."<<endl;
    cout<<"You have 6 chances to guess the number."<<endl;
    cout<<"Enter your guess: ";
    cin>>guess;
    int chances = 6;
    while(guess != random_number && chances > 0){
        if(guess < random_number){
            cout<<"Your guess is too low. Try again."<<endl;
            }
            else{
                cout<<"Your guess is too high. Try again."<<endl;
                }
                cout<<"You have "<<chances<<" chances left."<<endl;
                cout<<"Enter your guess: ";
                cin>>guess;
                chances--;
                }
                if(guess == random_number){
                    cout<<"Congratulations! You guessed the number in "<<6-chances<<" chances."<<endl;
                    }
                    else{
                        cout<<"Sorry, you didn't guess the number. The number was "<<random_number<<endl
                        <<"Better luck next time!"<<endl;
                        }
                        return 0;
                        }
                        
                       