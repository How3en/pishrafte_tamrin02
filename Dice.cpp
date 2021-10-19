#include <iostream>
#include <time.h>
using namespace std;
int main()
{
    int roll;
    srand(time(0));
    label:
    roll=rand()%6+1;
    cout << roll;
    if (roll ==  6){
    cout <<" Well done! another chance :"<<'\n';
    goto label;
    }
    return 0;
}
