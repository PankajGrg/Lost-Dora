#include<bits/stdc++.h>
#include "outputs.cpp"
#include "bank.cpp"
#include "hospital.cpp"
#include "restaurant.cpp"
#include "grocery.cpp"
#include "dijkstra.cpp"
using namespace std;

int main()
{
    dijkstra();

    cout<<"\n\n------------------------------------------ WELCOME DORA ------------------------------------------\n\n";
    cout<<"\n\n---------------------------------------------------------------\n\n";
    cout<<"HEY DORA!!\nGLAD TO MEET YOU\nI AM YOUR HELPING HAND\nLET'S GET STARTED";
    
    for(;;)
    {
        cout<<"\n\n---------------------------------------------------------------\n\n";
        cout<<"PLACES YOU CAN VISIT IN ACAPULCO\n\n";
        cout<<"1.RESTUARANT\n2.GROCERY STORE\n3.BANK\n4.HOSPITAL\n5.TATA";
        cout<<"\n\n---------------------------------------------------------------\n\n";
        int ch1;
        char key;
        cin>>ch1;
        switch(ch1)
        {
            case 1:
            {
                cout<<"\n\n---------------------------------------------------------------\n\n";
                cout<<"WOULD YOU LIKE TO \n\n";
                cout<<"1.SEE THE ROUTE FIRST AND THEN USE FACILITIES\n2.USE THE FACALITIES FIRST AND THEN THE ROUTE\n3.CHANGE PLACE\n";
                cout<<"4.EXIT\n\n";
                int ch2;
                cin>>ch2;
                switch(ch2)
                {
                    case 1:
                    {
                        path(4);
                        cout<<"\n\nENTER ANY KEY TO SEE THE PATH\n";
                        cin>>key;
                        cout<<"\n\n";
                        home2restaurant();
                        cout<<"\n\nENTER ANY KEY TO CONTINUE\n";
                        cin>>key;
                        cout<<"\n\n";
                        restaurant();
                        // cout<<"\n\nENTER ANY KEY TO CONTINUE\n";
                        // cin>>key;
                        // cout<<"\n\n";
                        break;
                    }
                    case 2:
                    {
                        restaurant();
                        cout<<"\n\nENTER ANY KEY TO CONTINUE\n";
                        cin>>key;
                        cout<<"\n\n";
                        path(4);
                        cout<<"\n\nENTER ANY KEY TO SEE THE PATH\n";
                        cin>>key;
                        cout<<"\n\n";
                        home2restaurant();
                        // cout<<"\n\nENTER ANY KEY TO CONTINUE\n";
                        // cin>>key;
                        // cout<<"\n\n";
                        break;
                    }
                    case 3:break;
                    case 4:return 0;
                    default : cout<<"\n\nINVALID CHOICE\n\n\n\n";
                }
                cout<<"\n\n---------------------------------------------------------------\n\n";
                break;
            }
            case 2:
            {
                cout<<"\n\n---------------------------------------------------------------\n\n";
                cout<<"WOULD YOU LIKE TO \n\n";
                cout<<"1.SEE THE ROUTE FIRST AND THEN USE FACILITIES\n2.USE THE FACALITIES FIRST AND THEN THE ROUTE\n3.CHANGE PLACE\n";
                cout<<"4.EXIT\n\n";
                int ch2;
                cin>>ch2;
                switch(ch2)
                {
                    case 1:
                    {
                        path(2);
                        cout<<"\n\nENTER ANY KEY TO SEE THE PATH\n";
                        cin>>key;
                        cout<<"\n\n";
                        home2grocery();
                        cout<<"\n\nENTER ANY KEY TO CONTINUE\n";
                        cin>>key;
                        cout<<"\n\n";
                        grocery();
                        // cout<<"\n\nENTER ANY KEY TO CONTINUE\n";
                        // cin>>key;
                        // cout<<"\n\n";
                        break;
                    }
                    case 2:
                    {
                        grocery();
                        cout<<"\n\nENTER ANY KEY TO CONTINUE\n";
                        cin>>key;
                        cout<<"\n\n";
                        path(2);
                        cout<<"\n\nENTER ANY KEY TO SEE THE PATH\n";
                        cin>>key;
                        cout<<"\n\n";
                        home2grocery();
                        // cout<<"\n\nENTER ANY KEY TO CONTINUE\n";
                        // cin>>key;
                        // cout<<"\n\n";
                        break;
                    }
                    case 3:break;
                    case 4: return 0;
                    default : cout<<"\n\nINVALID CHOICE\n\n\n\n";
                }
                cout<<"\n\n---------------------------------------------------------------\n\n";
                break;
            }
            case 3:
            {
                cout<<"\n\n---------------------------------------------------------------\n\n";
                cout<<"WOULD YOU LIKE TO \n\n";
                cout<<"1.SEE THE ROUTE FIRST AND THEN USE FACILITIES\n2.USE THE FACALITIES FIRST AND THEN THE ROUTE\n3.CHANGE PLACE\n";
                cout<<"4.EXIT\n\n";
                int ch2;
                cin>>ch2;
                switch(ch2)
                {
                    case 1:
                    {
                        path(1);
                        cout<<"\n\nENTER ANY KEY TO SEE THE PATH\n";
                        cin>>key;
                        cout<<"\n\n";
                        home2bank();
                        cout<<"\n\nENTER ANY KEY TO CONTINUE\n";
                        cin>>key;
                        cout<<"\n\n";
                        bank();
                        // cout<<"\n\nENTER ANY KEY TO CONTINUE\n";
                        // cin>>key;
                        // cout<<"\n\n";
                        break;
                    }
                    case 2:
                    {
                        bank();
                        cout<<"\n\nENTER ANY KEY TO CONTINUE\n";
                        cin>>key;
                        cout<<"\n\n";
                        path(1);
                        cout<<"\n\nENTER ANY KEY TO SEE THE PATH\n";
                        cin>>key;
                        cout<<"\n\n";
                        home2bank();
                        // cout<<"\n\nENTER ANY KEY TO CONTINUE\n";
                        // cin>>key;
                        // cout<<"\n\n";
                        break;
                    }
                    case 3:break;
                    case 4:return 0;
                    default : cout<<"\n\nINVALID CHOICE\n\n\n\n";
                }
                cout<<"\n\n---------------------------------------------------------------\n\n";
                break;
            }
            case 4:
            {
                cout<<"\n\n---------------------------------------------------------------\n\n";
                cout<<"WOULD YOU LIKE TO \n\n";
                cout<<"1.SEE THE ROUTE FIRST AND THEN USE FACILITIES\n2.USE THE FACALITIES FIRST AND THEN THE ROUTE\n3.CHANGE PLACE\n";
                cout<<"4.EXIT\n\n";
                int ch2;
                cin>>ch2;
                switch(ch2)
                {
                    case 1:
                    {
                        path(3);
                        cout<<"\n\nENTER ANY KEY TO SEE THE PATH\n";
                        cin>>key;
                        cout<<"\n\n";
                        home2hospital();
                        cout<<"\n\nENTER ANY KEY TO CONTINUE\n";
                        cin>>key;
                        cout<<"\n\n";
                        hospital();
                        // cout<<"\n\nENTER ANY KEY TO CONTINUE\n";
                        // cin>>key;
                        // cout<<"\n\n";
                        break;
                    }
                    case 2:
                    {
                        hospital();
                        cout<<"\n\nENTER ANY KEY TO CONTINUE\n";
                        cin>>key;
                        cout<<"\n\n";
                        path(3);
                        cout<<"\n\nENTER ANY KEY TO SEE THE PATH\n";
                        cin>>key;
                        cout<<"\n\n";
                        home2hospital();
                        // cout<<"\n\nENTER ANY KEY TO CONTINUE\n";
                        // cin>>key;
                        // cout<<"\n\n";
                        break;
                    }
                    case 3:break;
                    case 4: return 0;
                    default : cout<<"\n\nINVALID CHOICE\n\n\n\n";
                }
                cout<<"\n\n---------------------------------------------------------------\n\n";
                break;
            }
            case 5:
            {
                cout<<"\n\n------------------------------------------------------------------- BYE BYE -------------------------------------------------------------------\n\n";
                return 0;
            }
            default: cout<<"OOPS INVALID CHOICE\n\nLET'S GO AGAIN\n\n\n\n";
        }
    }
    return 0;
}
