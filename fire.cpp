#include<iostream>
using namespace std;



void humanDetection()
{
    cout<<"\n-------------------------\n";
    cout<<"HUMAN DETECTION\n";
    cout<<"-------------------------\n";

    cout<<"\nSomeone has detected the fire.\n";
    cout<<"\nIs the fire in the building?(yes/no)\n";
    string response;
    cin>>response;
    if(response == "yes")
    {
        cout<<"\nPush the nearest fire alarm button.\n";
        // safetyMeasures();
    }
    else
    {
        cout<<"\nContact the fire department immediately.\n";
    }
}

void smokeDetecter()
{
    cout<<"\n-------------------------\n";
    cout<<"SMOKE DETECTOR\n";
    cout<<"-------------------------\n";

    cout<<"\nSmoke detector has detected the fire.\n";
    cout<<"\nSomke detector triggered the alarm.\n";
    // safetyMeasures();
}

int main()
{
    cout<<"Fire evacuation plan:\n";
    cout<<"\nWho detected the fire?\n";
    cout<<"1. Fire alarm system\n"; 
    cout<<"2. Human observation\n";
    int choice;
    cin>>choice;
    if(choice == 1)
    {
        cout<<"Fire alarm system detected the fire.\n";
        smokeDetecter();
    }
    else
    {
        cout<<"Human observation detected the fire.\n";
        humanDetection();
    }
    cout<<"\nFire evacuation plan completed.\n";
}