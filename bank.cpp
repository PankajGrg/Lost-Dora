#include<bits/stdc++.h>
using namespace std;
int bank()
{
    cout<<"\n\n---------------------------BANK------------------------\n\n";
    long long int password;
    cout<<"\nENTER YOUR 10 DIGITS ACCOUNT NUMBER \n";
    cin>>password;
    cout<<"ENTER THE PASSWORD\nHINT:(1234)\n\n";
    cin>>password;
    if(password==1234)
    {
        int balance=1000+rand();
        int op;
        for(;;)
        {
            cout<<"\n\n---------------------  BANK FACILITIES ARE  ---------------------------\n\n";
            cout<<"1.DEPOSIT\n2.WITHDRAW\n3.TRANSFER\n4.CHECK BALANCE\n5.BYE\n";
            cin>>op;
            switch(op)
            {
                case 1:
                {
                    int deposit;
                    cout<<"\nYOUR CURRENT BALNCE IS:\n"<<balance<<endl;
                    cout<<"ENTER THE AMOUNT YOU WANT TO DEPOSIT\n";
                    cin>>deposit;
                    balance+=deposit;
                    cout<<"\nYOUR UPDATED BALANCE IS: "<<balance<<endl;
                    cout<<"\n\n\n-------------------THANKYOU-------------------------\n";
                    break;
                }
                case 2:
                {
                    int withdraw;
                    cout<<"\nYOUR CURRENT BALANCE IS:\n"<<balance<<endl;
                    cout<<"ENTER THE AMOUNT YOU WANT TO WITHDRAW\n";
                    cin>>withdraw;
                    if(withdraw > balance)
                        cout<<"\n\n\n--------------------INSUFFICIENT BALANCE----------------------\n\n\n";
                    else
                    {
                        balance-=withdraw;
                        cout<<"REMAINING BALANCE IS: "<<balance<<endl;
                        cout<<"PLEASE COLLECT THE FOLLOWING AMOUNT\n";
                        //algorithm to give min number of notes
                        int temp=withdraw;
                        int i, money[]={1,2,5,10,20,50,100,200,2000};
                        cout<<"NOTE\t\t\t\tNUMBER\n\n";
                        int a,count=0;
                        for(i=8;i>-1;i--)
                        {
                            a=withdraw / money[i];
                            count+=a;
                            cout<<a<<"\t\tX\t\t"<<money[i]<<endl;
                            withdraw-=a*money[i];
                        }
                        cout<<"\nTOTAL AMOUNT\n"<<temp;
                        cout<<"\nTOTAL NOTES\n"<<count;
                    }
                cout<<"\n\n\n-------------------THANKYOU-------------------------\n\n\n";
                break;
                }
                case 3:
                {
                    int transfer,account;
                    cout<<"\nYOUR CURRENT BALANCE IS:\n"<<balance<<endl;
                    cout<<"ENTER THE AMOUNT YOU WANT TO TRANSFER\n";
                    cin>>transfer;
                    cout<<"\nENTER THE 10 DIGIT ACCOUNT NUMBER YOU WANT TO TRANSFER TO\n";
                    cin>>account;
                    cout<<"\nTRANSFER SUCCESSFUL\n";
                    cout<<transfer<<" IS TRANSFERED TO ACCOUNT "<<account<<endl;
                    balance-=transfer;
                    cout<<"\nYOUR UPDATED BALANCE IS: "<<balance<<endl;
                    cout<<"\n\n\n-------------------THANKYOU-------------------------\n\n\n";
                    break;
                }
                case 4:
                {
                    cout<<"\nYOUR CURRENT BALANCE IS:\n"<<balance<<endl;
                    cout<<"\n\n\n-------------------THANKYOU-------------------------\n\n\n";
                    break;
                }
                case 5:
                {
                    cout<<"\n\n\n------------- THANKS FOR VISITING ----------------------\n\n\n";
                    return 0;
                }
                default: cout<<"\n\nENTER A VALID OPTION\n\n";
            }
        }
    }
    else
    {
        cout<<"\nOPPS WRONG PASSWORD\n\nTRY AGAIN\n";
        bank();
    }
    return 0;
}
// int main()
// {
//     bank();
//     return 0;
// }