//Ananya Chauhan 
//24070123157
//A3
#include <iostream>
using namespace std;

int main(){
    int choice;
    cout << "Enter any number from 1 to 5:";
    cin>>choice;
    switch(choice){
        case 1:
        cout<<"Push_up";
        break;
        case 2:
        cout<<"Bicycle";
        break;
        case 3:
        cout<<"Squat";
        break;
        case 4:
        cout<<"Leg press";
        break;
        case 5:
        cout<<"Weightlifting";
        break;
        default:
        cout<<"Enter wrong choice";
        break;
        
    }
    return 0;
}

/*
output:
Enter any number from 1 to 5:5
Weightlifting

Enter any number from 1 to 5:4
Leg press
*/  
