#include <bits/stdc++.h>
#include <math.h>
#include <stdlib.h>


using namespace std;
int count;
class account
{
public: char name[109];
    char an[100];
    int type = -1;

    void input_details()
    {
        cout << "\nENTER THE NAME:";
        cin >> name;
        cout << "\n1:CURRENT 2:SAVINGS\n";
        cin >> type;
        cout << "\nENTER THE ACCOUNT NUMBER:";
        cin >> an;
    }
    void details()
    {
        cout << "\nNAME:" << name;
        cout << "\nACCONT NUMBER:" << an;

        if (type == 1)cout << "\nACCOUNT TYPE:" << "CURRENT";
        else   cout << "\nACCOUNT TYPE:" << "SAVINGS";

    }
};

class trans                                                                                     //trans is the class which acommadates the transaction
{
public: float dep = 0, bal = 0, penal = -1, withd = 0;
    void deposit()
    {
        float dep = 0;
        cout << "\n" << "\nENTER THE DEPOST AMOUNT:";
        cin >> dep;

        bal += dep;

        cout << "\n" << dep << " IS CREDITED TO YOUR ACCOUNT.\n";
    }

    void withdraw()
    {

        float withd = 0;

        cout << "\nENTER THE AMOUNT TO BE WITHDRAWN:";

        cin >> withd;

        bal -= withd;
        if (bal < 0)
        {
            bal += withd;
            cout << "YOUR ACCOUNT BALANCE IS:" << bal;
            cout << "\nREQUESTED AMOUNT " << withd << " IS NOT DISPENSABLE\n";
            return;
        }
        cout << "\n" << withd << " IS DEBITED FROM YOUR ACOOUNT.\n";


    }

    void penalty()
    {
        float penal = 0;

        if (bal < 500) penal = bal - (bal - 0.05 * bal);

        if (penal > 0)    cout << "\nPENALTY=" << penal;
        bal -= penal;
    }

    void balance()
    {
        cout << "\nYOUR ACCOUNT BALANCE IS :" << bal << "\n";
    }

    void compond_int()
    {
        float famount, camount;

        camount = (bal + (bal * 0.05)) - bal;

        famount = camount + bal;

        bal += camount;

        cout << "\nINTEREST:" << camount;
    }


};

int main()
{
    int choice = 0;
    account a;
    trans s;
    dras227();
    a.input_details();
    switch (a.type)
    {

    case 1: a.details(); //current account= 1
        cout << "\nIMPORTANT NOTE:\nSince you have choosen CURRENT ACCOUNT you got to maintain a mininmum balance of 500.\nIf you fail to maintain minimum balance 5% service charge will be imposed on you for every transaction you make.";
        for (;;)
        {

            cout << "\n1:DEPOSIT\n2:WITHDRAWAL\n3:BALANCE\n4:ACCOUNT DETAILS\n5:EXIT\n";

            cin >> choice;
            system("clear");

            switch (choice)
            {
            case 1: s.deposit();
                s.penalty();
                s.balance();
                break;
            case 2: s.withdraw();
                s.penalty();
                s.balance();
                break;
            case 3: s.balance();
                break;
            case 4: a.details();
                break;
            case 5: return 69;
            default: cout << "\nINVALID CHOICE\n";
            }

        }
        break;
    case 2: a.details();
        cout << "\n\nIMPORTANT NOTE:\nSince you have chosen savings accout you will get interest of 4% for every deposit you make.\nSo you will get to more deposits.HAPPY BANKING!!!\n";
        for (;;)
        {
            cout << "\n1:DEPOSIT\n2:WITHDRAWAL\n3:BALANCE\n4:ACCOUNT DETAILS\n5:EXIT\n\n";

            cin >> choice;
            system("clear");
            switch (choice)
            {
            case 1: s.deposit();
                s.compond_int();
                s.balance();
                break;
            case 2: s.withdraw();
                s.balance();
                break;

            case 3: s.balance();
                break;

            case 4: a.details();
                break;
            case 5: return 420;
            default: cout << "\nINVALID CHOICE\n";
            }

        }
        break;
    default: "\nINVALID CHOICE";
        return 360;


    }

}

