#include<bits/stdc++.h>
using namespace std;

int grocery()
{
    long int v[10][500];
    long int n,w,value,i,j,a,b,ch;
    cout<<"\n\n\n---------------------------------------- WELCOME -----------------------------------------\n\n\n";
    for(;;)
    {
        cout<<"------------------------------------";
        cout<<"\n\n1.Get help\n2.Exit\n\n";
        cin>>ch;
        cout<<"------------------------------------\n\n";
        switch(ch)
        {
            case 1:
            {
                cout<<"Enter the total number of items: ";
                cin>>n;
                long int weight[n],val[n];
                cout<<"Enter the cost and quantity of each item\n";
                for(i=1;i<=n;i++)
                {
                    cin>>a>>b;
                    weight[i]=a*b;
                    val[i]=b;
                }
                cout<<"Enter your budget\n";
                cin>>w;
                cout<<"\n\n-------------------------------------------------------------------------------------------\n\n";
                for(i=0;i<=n;i++)
                {
                    for(j=0;j<=w;j++)
                    {
                        if(i==0||j==0)
                            v[i][j]=0;
                        else if(j-weight[i]>=0)
                            v[i][j]=max(v[i-1][j],val[i]+v[i-1][j-weight[i]]);
                        else
                            v[i][j]=v[i-1][j];
                    }
                }
                value=v[n][w];
                // cout<<"Solution of knapsack problem\n";
                // for(i=0;i<=n;i++)
                // {
                //     for(j=0;j<=w;j++)
                //     cout<<"%d\t",v[i][j];
                //     cout<<"\n";
                // }
                cout<<"\nThe maximum items you can buy is/are: "<<value;
                cout<<"\n\nThe items of an optimal subset are\n\n\n";
                for(i=n,j=w;i>=1&&j>0;i--)
                {
                    if(v[i][j]!=v[i-1][j])
                    {
                        cout<<"Item "<<i<<"\n\n";
                        j-=weight[i];
                    }
                }
                cout<<"\n\n-------------------------------------------------------------------------------------------\n\n";
                break;
            }
            case 2:
            {
                cout<<"\n\n\n---------------------------------------THANKS FOR VISITING---------------------------------------\n\n\n";
                return 0;
            }
            default: cout<<"\n\nENTER A VALID OPTION\n\n";
        }
    }
}

// int main()
// {
//     grocery();
//     return 0;
// }
