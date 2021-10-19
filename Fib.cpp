#include <iostream>
using namespace std;
int main()
{

    int a=1,b=1,c,i=2,number;
    cout<< "Enter your Number: ";
    cin >> number;
    if(number == 0){
    cout<< "error!";
    }
    else{
    cout<< " 1 1 ";
    while (i<number){
    c=a+b;
    cout<<c<<" ";
    a=b;
    b=c;
    i++;}}
    return 0;
}
