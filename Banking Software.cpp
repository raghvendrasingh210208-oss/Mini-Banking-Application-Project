
// Mini Banking System in C++

// Features: Deposit, Withdraw, Calculate Interest

// My first C++ project demonstrating classes, loops, and functions.


#include <iostream>
using namespace std;

class bank
{
public:
    int bank_id;
    string Name;
    int pin;
    float balance = 0;

    //Get Data
    void getdata()
    {
        cout << "Enter your BankID:" << endl;
        cin >> bank_id;
        cout << "Enter your Name:" << endl;
        cin >> Name;
        cout << "Enter your Pin:" << endl;
        cin >> pin;
         cout << "Enter your Balance:" << endl;
        cin >> balance;
    }

    //Display Data
    void displaydata()
    {
        cout << "Your BankID:" << bank_id << endl;
        cout << "Your Name:" << Name << endl;
        cout << "Your Balance" << balance << endl;
    }

    // insert
    void user_interest()
    {
        int Principal, Rate, Time;
        int si, ufinal;
        cout << "Enter The Amount Of Money" << endl;
        cin >> Principal;
        cout << "Enter The Amount Of Interest" << endl;
        cin >> Rate;
        cout << "Enter The Total Time Duration of Deposit" << endl;
        cin >> Time;
        si = Principal * Rate * Time;
        ufinal = si / 100;
        cout<<"Your Interest = "<<ufinal<<endl;
    }

    // Deduction
    void user_Deduction()
    {
        int AmountTo;
        cout << "Withdraw Money" << endl;
        cin >> AmountTo;
        if (AmountTo > balance)
        {
            cout<<"Insufficient Balance";
        }
        else
        {
            balance -= AmountTo;
            cout<<"Your Balance"<<balance<<endl;
        }
        

    }

    // Deposit
    void user_Deposit()
    {
        int AmountTo;
        cout << "Deposit Money" << endl;
        cin >> AmountTo;
        balance += AmountTo;
        cout<<"Your Balance"<<balance<<endl;

    }

};

int main()
{
    bank user1;

    
    user1.getdata();
    if (user1.bank_id == 1234 && user1.pin == 123)
    {
        cout << "Welcome User ... Select The Required Command Sr.No from Below to Run" << endl;
        bool running = true;

        while(running)
        {
        cout << "1.Deposit" << endl;
        cout << "2.Withdraw" << endl;
        cout << "3.Calculate Interest" << endl;
        cout << "4.Exit" << endl;

        int choice;

        cout<<"Enter Sr.No of the Task:"<<endl;
        cin>>choice;
        
        if (choice == 1)
        {
            user1.user_Deposit();
            
        }
        else if (choice == 2)
        {
            user1.user_Deduction();
            
        }
        else if (choice == 3)
        {
            user1.user_interest();
        }
        else if (choice == 4 )
        {
            running = false;
        }
        else
        {
            cout << "Something is Wrong ... Please Try again Sir/Mam";
        };
        

        
    }

        };
        

    cout << "Program's End Here , Bye ...";
}

