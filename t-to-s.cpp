#include <iostream>
using namespace std;
int main()
{

    int time [3];////{hours,minutes,seconds}
    cout << "Enter hours: ";
    cin >>time[0];
    cout << "Enter minutes: ";
    cin >>time[1];
    cout << "Enter seconds: ";
    cin >>time[2];
    cout << time[2] + time[1]*60 + time[0]*3600<<" sec = ";
    if(time[0]<10) {cout<<"0"<<time[0]<<":";} else {cout<<time[1]<<":";}
    if(time[1]<10) {cout<<"0"<<time[1]<<":";} else {cout<<time[1]<<":";}
    if(time[2]<10) {cout<<"0"<<time[2];} else {cout<<time[2];}

return 0;
}

