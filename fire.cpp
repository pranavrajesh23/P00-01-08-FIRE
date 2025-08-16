#include<iostream>
using namespace std;


void seepInFire()
{
    cout<<"\n-------------------------\n";
    cout<<"FIRE SEEPING IN\n";
    cout<<"-------------------------\n";

    cout<<"\nDo not open the door if you see fire seeping in.\n";
    cout<<"\nSeal all cracks with wet towels or clothes.\n";
    cout<<"\nContact the fire department immediately.\n";
    cout<<"\nWave at the window to signal for help.\n";
    cout<<"\nWait for the fire department to arrive.\n";
}

void safetyMeasures()
{
    cout<<"\n-------------------------\n";
    cout<<"SAFETY MEASURES\n";
    cout<<"-------------------------\n";

    cout<<"\nBring keys,wallet,phone and wet towel.\n";
    cout<<"\nDoes the fire seep in through the door?(yes/no)\n";
    string response;
    cin>>response;  
    if(response == "yes")
    {
        seepInFire();
    }
    else
    {
        cout<<"\nLeave the building immediately.\n";
        downStairsRun();
    }
}

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
        safetyMeasures();
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
    safetyMeasures();
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