#include <iostream>
using namespace std;

int Trailing_Zeros(int _N)
{
	int iNumberOfFive = 0;
	
	for (int i = 1;_N >= i * 5; i ++)
	{
		int iFiveI = i * 5;
		while ((iFiveI % 5) == 0)
		{
			iFiveI /= 5;
			iNumberOfFive ++;
		}
  }
	return iNumberOfFive;
}

int main()
{
	int iN;
	
	cin >> iN;
	cout << Trailing_Zeros(iN) << endl;
	
  return 0;
}
