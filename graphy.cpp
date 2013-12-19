//c++ program

#include <iostream>
using namespace std;

int main()
{
	cout << "Please enter your difficuly level (1-10)" << endl;
	int difficulty;
	cin >> difficulty;
	cout << endl;
	cout << "You will be playing on level " << difficulty << endl;
	int numSlopes = 10;
	double slopes [10] = {2.3,43,4.2,7.4,23,45,65.3,95,23,1};
	for(int n=0;n<10;n++){
		slopes[n] = rand()%(difficulty*2) - difficulty;
		cout << slopes[n] << endl;
	}
	return 0;
}