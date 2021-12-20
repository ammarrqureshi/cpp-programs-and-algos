#include <iostream>

#include <cstdlib> //library for random number generation

using namespace std;
 

int rules();
 
int main()
{
    char playerName[25];
    int amount; 
    int bettingAmount; 
    int guess;
    int dice; 
    int choice;
 

   
    cout << "\n\n\n\t\tCASINO GAME\n\n\n\n";

 
    cout << "\n\nEnter Your Name : ";
    cin>>playerName;
 
    cout << "\n\nEnter Deposit amount to play game : $";
    cin >> amount;
    
    do
    {

        rules();
        cout << "\n\nYour current balance is $ " << amount << "\n";
		
		// Get player's betting amount
        do
        {
            cout <<playerName<<", enter money to bet : $";
            cin >> bettingAmount;
            if(bettingAmount > amount)
                cout << "Your betting amount is more than your current balance\n"
                       <<"\nRe-enter data\n ";
        }while(bettingAmount > amount);
 
		// Get player's numbers
        do
        {
            cout << "Guess your number to bet between 1 to 10 :";
            cin >> guess;
        }while(guess <= 0 || guess > 10);
 
        dice = rand()%10 + 1; //generate a random number and assign to dice
    
        if(dice == guess)
        {
            cout << "\n\nGood Luck!! You won Rs." << bettingAmount * 10;
            amount = amount + bettingAmount * 10;
        }
        else
        {
            cout << "Bad Luck this time !! You lost $ "<< bettingAmount <<"\n";
            amount = amount - bettingAmount;
        }
 
        cout << "\nThe winning number was : " << dice <<"\n";
        cout << "\n"<<playerName<<", You have $ " << amount << "\n";
        if(amount == 0)
        {
            cout << "You have no money to play ";
            break;
        }
        cout << "\n\n-->Do you want to play again (y/n)? ";		
        cin >> choice;
    }while(choice =='Y'|| choice=='y');
    
    cout << "\n\n\n";

    cout << "\n\nThanks for playing game. Your balance amount is $ " << amount << "\n\n"; 
    return 0;
}
 

 
int rules()
{
    cout << "\n\n";
    cout << "\t\tRULES OF THE GAME\n";
    cout << "\t1. Choose any number between 1 to 10\n";
    cout << "\t2. If you win you will get 10 times of money you bet\n";
    cout << "\t3. If you bet on wrong number you will lose your betting amount\n\n";

}
 
// END OF PROGRAM
