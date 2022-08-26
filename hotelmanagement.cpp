#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int quant,choice;
    int Qroom=0,Qpasta=0,Qburger=0,Qnoodles=0,Qshake=0,Qchicken=0;

    int Sroom=0,Spasta=0,Sburger=0,Snoodles=0,Sshake=0,Schicken=0;

    int Total_room=0,Total_burger=0,Total_pasta=0,Total_noodles=0,Total_shake=0,Total_chicken=0;

    cout<<"\n\t Quantity Of Item we Have: ";
    cout<<"\n Rooms Available: ";
    cin>>Qroom;
    cout<<"\n Quantity Of Pasta: ";
    cin>>Qpasta;
    cout<<"\n Quantity of Burger: ";
    cin>>Qburger;
    cout<<"\n Quantity of Noodles: ";
    cin>>Qnoodles;
    cout<<"\n Quantity of Shake: ";
    cin>>Qshake;
    cout<<"\n Quantity of Chicken-Roll: ";
    cin>>Qchicken;
    system("cls");
     m:
    cout<<"\n\t\t\t Please Select from the Menu Option: ";
    cout<<"\n 1. Rooms : ";
    cout<<"\n 2. Pasta : ";
    cout<<"\n 3. Burger : ";
    cout<<"\n 4. Noodles : ";
    cout<<"\n 5. Shake : ";
    cout<<"\n 6. Chicken-Roll : ";
    cout<<"\n 7. Information about Sales and Collection: ";
    cout<<"\n 8. Exit : ";

    cout<<"\n\n Please Select Your Choice: ";
    cin>>choice;

    switch(choice)
    {
    case 1:
        {
            cout<<"\n\n Enter The number of Rooms You Want: ";
            cin>>quant;
            if(Qroom-Sroom>=quant){
                Sroom=Sroom+quant;
                Total_room=Total_room+(quant*1200);
                cout<<"\n\n\t\t"<<quant<< "Rooms are Reserved By You.";
                cout<<"\n\t\t  --------------------------------------";
            }
            else{
                cout<<"\n\n\t\t Only"<<Qroom-Sroom<< "Room/Rooms are Available in Hotel!";
                break;
            }
        }
    case 2:
        {
            cout<<"\n\n Enter Pasta Quantity: ";
            cin>>Qpasta;
            if(Qpasta-Spasta>=quant){
                Spasta=Spasta+quant;
                Total_pasta=Total_pasta+(quant*250);
                cout<<"\n\n\t\t"<<quant<< "Pasta Ordered!";
                cout<<"\n\t\t  --------------------------";
            }
            else{
                cout<<"\n\n\t Only"<<Qpasta-Spasta<< "Pastas are available!";
                break;
            }
        }
    case 3:
        {
            cout<<"\n\n Enter Burger Quantity: ";
            cin>>Qburger;
            if(Qburger-Sburger>=quant){
                Sburger=Sburger+quant;
                Total_burger=Total_burger+(quant*170);
                cout<<"\n\n\t\t"<<quant<< "Burger Ordered!";
                cout<<"\n\t\t  --------------------------";
            }
            else{
                cout<<"\n\n\t Only"<<Qburger-Sburger<< "Burger are available!";
                break;
            }
        }
    case 4:
        {
            cout<<"\n\n Enter Noodles Quantity: ";
            cin>>Qnoodles;
            if(Qnoodles-Snoodles>=quant){
                Snoodles=Snoodles+quant;
                Total_noodles=Total_noodles+(quant*120);
                cout<<"\n\n\t\t"<<quant<< "Noodles Ordered!";
                cout<<"\n\t\t  --------------------------";
            }
            else{
                cout<<"\n\n\t Only"<<Qnoodles-Snoodles<< "Noodles are available!";
                break;
            }
        }
    case 5:
        {
            cout<<"\n\n Enter Shake Quantity: ";
            cin>>Qshake;
            if(Qshake-Sshake>=quant){
                Sshake=Sshake+quant;
                Total_shake=Total_shake+(quant*220);
                cout<<"\n\n\t\t"<<quant<< "Shake's Ordered!";
                cout<<"\n\t\t  --------------------------";
            }
            else{
                cout<<"\n\n\t Only"<<Qshake-Sshake<< "Shakes are available!";
                break;
            }
        }
    case 6:
        {
            cout<<"\n\n Enter Chicken-Roll Quantity: ";
            cin>>Qchicken;
            if(Qchicken-Schicken>=quant){
                Schicken=Schicken+quant;
                Total_chicken=Total_chicken+(quant*290);
                cout<<"\n\n\t\t"<<quant<< "Chicken-Roll's Ordered!";
                cout<<"\n\t\t  --------------------------";
            }
            else{
                cout<<"\n\n\t Only"<<Qchicken-Schicken<< "Chicken-Roll's are available!";
                break;
            }
        }
    case 7:
        {
            cout<<"\n\t\t ~:Detail's Of Sale's and Collection:~";

            cout<<"\n\n Number of Room's we had:"<<Qroom;
            cout<<"\n\n Number of Room's we Gave for rent:"<<Sroom;
            cout<<"\n\n Remaining Room's: "<<Qroom-Sroom;
            cout<<"\n\n Total room Collection for the Day: "<<Total_room;

            cout<<"\n\n Number of Pastas we had:"<<Qpasta;
            cout<<"\n\n Number of Past's we Sold:"<<Spasta;
            cout<<"\n\n Remaining Pasta: "<<Qpasta-Spasta;
            cout<<"\n\n Total Pasta Sold/Delivered for the Day: "<<Total_pasta;

            cout<<"\n\n Number of Burger's we had:"<<Qburger;
            cout<<"\n\n Number of Burger's we Sold:"<<Sburger;
            cout<<"\n\n Remaining Burger: "<<Qburger-Sburger;
            cout<<"\n\n Total Burger Sold/Delivered for the Day: "<<Total_burger;

            cout<<"\n\n Number of Noodle's we had:"<<Qnoodles;
            cout<<"\n\n Number of Noodle's we Sold:"<<Snoodles;
            cout<<"\n\n Remaining Noodle: "<<Qnoodles-Snoodles;
            cout<<"\n\n Total Noodle Sold/Delivered for the Day: "<<Total_noodles;

            cout<<"\n\n Number of Shake's we had:"<<Qshake;
            cout<<"\n\n Number of Shake's we Sold:"<<Sshake;
            cout<<"\n\n Remaining Shake: "<<Qshake-Sshake;
            cout<<"\n\n Total Shake Sold/Delivered for the Day: "<<Total_shake;

            cout<<"\n\n Number of Chicken-Roll's we had:"<<Qchicken;
            cout<<"\n\n Number of Chicken-Roll's we Sold:"<<Schicken;
            cout<<"\n\n Remaining Chicken-Roll: "<<Qchicken-Schicken;
            cout<<"\n\n Total Chicken-Roll Sold/Delivered for the Day: "<<Total_chicken;
        }
    case 8:
        {
            exit(0);
        }
    default:{
        cout<<"\n\n\n\t\t Please Select the Given Valid Choice!  ";
        cout<<"\n\t\t  Thank You ";
      }
    }
    goto m;
    getch();
}
