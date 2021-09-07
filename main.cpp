#include <iostream>
using namespace std;
int main() {
	float brutto;
	cout<<"Podaj kwotê brutto"<<endl;
	cin>>brutto;
	float kwotapod = brutto*0.19;
	cout<<"kwota podatku \t" << kwotapod<<endl;
	cout<<"kwota netto: \t"<< brutto-kwotapod<<endl;
	return 0;
}
