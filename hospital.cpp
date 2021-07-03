#include<iostream>
using namespace std;
int hospital()
{
    cout<<"\n\n---------------------HOSPITAL----------------------\n\n";
    int op;
    for(;;)
    {
        cout<<"1.PATIENT'S DETAILS\n2.EXIT\n";
        cin>>op;
        switch(op)
        {
            case 1:
            {
            int patients_id;
            int id[]={100,101,102,103,104,105,106,107,108,109};
            string name[]={"HAPPY","JOHN","EMMA","OLIVIA","JAMES","LEO","DANIEL","LILY","LUNA","MIA"};
            again:
                
                cout<<"ENTER THE PATIENT'S ID NUMBER\n";
                cin>>patients_id;
                int a=100+(patients_id%10);
                int l=0,h=9,temp=-1,mid=-1;
                //BINARY SEARCH ALGORITHM
                while(l<=h)
                {
                    mid=(l+h)/2;
                    if(id[mid]==a)
                    {
                        temp=mid;
                        break;
                    }
                    else if(id[mid]>a)
                        h=mid-1;
                    else
                        l=mid+1;
                }
                //cout<<mid<<endl<<temp<<endl;
                if(temp>-1)
                {
                    cout<<"\n\n---------------------------------------------------------\n\n";
                    cout<<"PATIENT'S DETAILS ARE:\n\n\nID: "<<patients_id<<"\nNAME: "<<name[temp];
                    cout<<"\nCONTACT NUMBER: 98XXXXXXX8\nROOM NUMBER: AOO"<<(id[temp]-96)<<endl;
                    cout<<"\nDOCTOR NAME: MR. RICHARD WILLIAMSON\n";
                    cout<<"\n\n---------------------------------------------------------\n\n\n";
                }
                else
                {
                    cout<<"PATIENT NOT FOUND\nTRY AGAIN\n";
                    goto again;
                }
                cout<<"\n\n\n";
                break;
            }
            case 2: 
            {
                cout<<"\n\n-----------------------THANKS FOR VISITING--------------------------";
                return 0;
            }
            default: cout<<"\n\nENTER A VALID CHOICE\n\n";
        }
    }
    return 0;
}
// int main()
// {
//     hospital();
//     return 0;
// }
