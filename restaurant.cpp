#include<bits/stdc++.h>
using namespace std;
int restaurant()
{
    cout<<"\n\n\n-----------------------RESTAURANT---------------------\n\n\n";
    string menu[]={"SPRING ROLLS","PANEER TIKA","TOMATO SOUP","BUTTER NAAN","DAL MAKHANI",
                    "SHAHI PANEER","STEAMED RICE","HOT NOODLES","SPC. LASSI","ICE CREAM"};
    int i,j , price[]={100,120,200,20,210,280,200,180,110,130};
    int order[2][10]={0},cost[10]={0};
    while(1)
    {
        cout<<"ENTER A CHOICE\n";
        cout<<"1.TABLE BOOKING\n2.TABLE BOOKING CANCELATION\n3.MENU AND ORDER\n4.BILL\n5.EXIT\n\n";
        int op,table,table1;
        string t;
        cin>>op;
        cout<<endl;
        int n;
        switch(op)
        {
            case 1:
            {
                cout<<"ENTER THE TIME OF CHECKIN\n";
                cin>>t;
                table=rand() % 10;
                cout<<"BOOKING CONFIRMED\n\n";
                cout<<"YOUR TABLE NUMBER IS: "<<table;
                cout<<"\n\n\n\n\n";
                break;
            }
            case 2:
            {
                cout<<"ENTER THE TABLE NUMBER\n";
                cin>>table1;
                if(table==table1)
                    cout<<"BOOKING CANCELED\n\n\n";
                else
                    cout<<"SORRY!!\nWRONG TABLE NUMBER :(\n\n\n\n\n";
                break;
            }
            case 3:
            {
                cout<<"\tDISH\t\t\t\tCOST\n\n";
                for(i=0;i<10;i++)
                {
                    cout<<i+1<<". "<<menu[i]<<"\t\t\t\t"<<price[i]<<endl;
                    
                }
                cout<<"\nENTER THE NUMBER OF DISHES YOU WANT TO ORDER\n";
                cin>>n;
                cout<<"ENTER THE SERIAL NUMBER OF THE DISH AND THE QUANTITY\n\n";
                int a,b;
                for(i=0;i<n;i++)
                {
                    cin>>a>>b;
                    order[0][i]=a-1;
                    order[1][i]=b;
                    cost[i]=b*price[a-1];
                    //cout<<cost[i]<<endl;
                }
                cout<<"YOUR ORDER WILL BE READY AT THE TIME OF CHECKIN SO THAT YOU DON'T HAVE TO WAIT FOR LONG\n";
                cout<<"DO NOT WORRY!!\nYOU ORDER WILL BE HOT AND FRESH ";
                cout<<"\nOR ELSE FOOD IS ON US\n\n\n\n\n";
                break;
            }
            case 4:
            {
                cout<<"GENERATING BILL................\n\n";
                //sorting algorithm
                int flag;
                for(i=0;i<n-1;i++)
                {
                    flag=0;
                    for(j=0;j<n-1-i;j++)
                    {
                        if(cost[j]>cost[j+1])
                        {
                            flag=1;
                            swap(cost[j],cost[j+1]);
                            swap(order[0][j],order[0][j+1]);
                            swap(order[1][j],order[1][j+1]);
                        }
                    }
                    if(flag==0)
                        break;
                }
                float total=0;
                cout<<"\nITEMS\t\t\t\tCOST\n\n";
                for(i=0;i<n;i++)
                {
                    cout<<menu[order[0][i]]<<"\t\t\t\t"<<order[1][i]<<"\t\t\t\t"<<cost[i]<<endl;
                    total+=cost[i];
                }
                cout<<endl;
                float tax=0.18*total;
                total+=tax;
                cout<<"TAX/SERVICE\t\t\t\t18.0%\t\t\t\t"<<tax<<endl;
                cout<<"------------------------------------------------------------------------------------------------------------\n";
                cout<<"TOTAL\t\t\t\t\t\t\t\t\t"<<total<<"/-\n";
                cout<<"------------------------------------------------------------------------------------------------------------\n";
                cout<<"\n\n\nPLEASE PAY AT THE CASH COUNTER\n\n\n\n\n";
                break;
            }
            case 5:
            {
                cout<<"\n\n\n-----------------------THANKS FOR COMING-----------------------\n\n\n";
                return 0;
            }
            default: cout<<"\n\nENTER A VALID OPTION\n\n";
        }
    }

}
// int main()
// {
//     restaurant();
//     return 0;
// }