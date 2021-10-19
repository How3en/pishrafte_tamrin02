#include <iostream>
using namespace std;
int main()
{

	int number,i=1;
	float max=0,min=20,score,sum=0;
	cout<<"Enter the number of students: ";
	cin>>number;
        while(i <= number){
	
        cout <<"Enter student score "<<i<<": ";
	cin >> score;
	if(score > max){
        max = score;}
	else if(score < min){
        min = score;}
	sum = sum + score;
	i++;}

 	cout<<"Avrage: "<<sum/number<<endl;
	cout<<"Highest score: "<<max<<endl;
	cout<<"The lowest score: "<<min<<endl;

	return 0;
}
