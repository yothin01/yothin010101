#include <iostream>
using namespace std;
int main()
{
	float a1;
	cout << "Enter grade number : ";
		cin >> a1;
		
		if (a1 <= 59) {
			cout << "grade F!!!!!!!";
		}
		else if(a1 >= 60 && a1 <= 69) {
			cout << "grade D!!!!!!!";
		}

		else if (a1 >= 70 && a1 <= 79) {
			cout << "grade C!!!!!!!";
		}

		else if (a1 >= 80 && a1 <= 89) {
			cout << "grade B!!!!!!!";
		}

		else if (a1 >= 90 && a1 <= 99) {
			cout << "grade A!!!!!!!";
		}

		else if (a1 >= 100 &&  a1 <= 101) {
			cout << "Your god From KMUTNB!!!!!!!";
		}
		cout << endl;
		return (0);

}