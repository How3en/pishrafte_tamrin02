#include <iostream>
using namespace std;
int main()
{

    float sum = 0,number;
    string op;
    while (true)
    {

        cout << " Enter number: ";
        cin >> number;
        sum =sum+ number;
        cout << "Wnana continue ? (yes or exit): ";
        cin >> op;
        if (op == "yes")
            continue;
        if (op == "exit")
            break;

    }
    cout << "Total numbers: " << sum << endl;
    return 0;
}
