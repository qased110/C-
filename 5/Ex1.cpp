#include<iostream>
using namespace std;

int main()
{
	int value;
	int count = 0;
	int total;

	cout << "Enter integers (9999 to end): " <<endl;
	     cin>> value;

	for ( total = 0; value != 9999; count++)
	{
		
		total = total + value;
		cin>> value;
	}

	if (count != 0)
		cout << "\nThe average is: "<<  static_cast<double>(total) / count ;
	else
		cout<< "\nNo values were entered."<<endl;

	system("pause");
	return 0;
}
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          #include<iostream>
using namespace std;

int main()
{
	int value;
	int count = 0;
	int total;

	cout << "Enter integers (9999 to end): " <<endl;
	     cin>> value;

	for ( total = 0; value != 9999; count++)
	{
		
		total = total + value;
		cin>> value;
	}

	if (count != 0)
		cout << "\nThe average is: "<<  static_cast<double>(total) / count ;
	else
		cout<< "\nNo values were entered."<<endl;

	system("pause");
	return 0;
}
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          