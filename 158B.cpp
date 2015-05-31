//158B - Taxi

#include <iostream>

using namespace std;

int main()
{
	int g, i, s, taxi, sum1=0, sum2=0, sum3=0, sum4=0;

	cin >> g;

	while(g--)
	{
		cin >> s;
		if(s==4)
			sum4++;
		else if(s==3)
			sum3++;
		else if(s==2)
			sum2++;
		else
			sum1++;
	}

	taxi = sum4;

	while(sum3>0)
	{
		if(sum1>0)
		{
			taxi++;
			sum1--;
		}
		else
			taxi++;

		sum3--;
	}

	while(sum2>0)
	{
		if(sum2%2==0)
		{
			taxi += sum2/2;
			sum2 = 0;
		}
		else
		{
			taxi += (int)sum2/2;
			sum2 -= (int)(sum2/2)*2;

			if(sum2<2)
			{
				if(sum1>=2)
				{
					taxi++;
					sum1 -= 2;
					sum2 = 0;
				}
				else
				{
					taxi++;
					sum1--;
					sum2 = 0;
				}
			}
		}
	}

	while(sum1>0)
	{
		if(sum1%4==0)
		{
			taxi += sum1/4;
			sum1 = 0;
		}
		else
		{
			if(sum1<4)
			{
				taxi++;
				sum1 = 0;
			}
			else
			{
				taxi += (int)sum1/4;
				sum1 -= (int)(sum1/4)*4;
			}
		}
	}

	cout << taxi;

	return 0;
}
