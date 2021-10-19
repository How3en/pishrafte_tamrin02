#include <iostream>
using namespace std;
int main()
{

     int time [4];//{hours,minutes,seconds,number}
     cout << "Enter Seconds: ";
     cin >>time[3];
     time[1] = time[3] / 60;
     time[0] = time[1] / 60;
     time[2] = time[3] % 60;
     time[1] = time[1] % 60;
     cout << time[3]<<" sec = ";
     if(time[0]<10) {cout<<"0"<<time[0]<<":";} else {cout<<time[1]<<":";}
     if(time[1]<10) {cout<<"0"<<time[1]<<":";} else {cout<<time[1]<<":";}
     if(time[2]<10) {cout<<"0"<<time[2];} else {cout<<time[2];}

     return 0;
}
