#include<iostream>
using namespace std;

int sizeY, sizeX;

int box[4][5] = 
{
		3,5,4,2,5,
		3,3,3,2,1,
		3,2,6,7,8,
		9,1,1,3,2
};

int sum(int dy, int dx)
{
	int x, y;
	int sum = 0;
	for (y = 0; y < sizeY; y++)
	{
		for (x = 0; x < sizeX; x++)
		{
			sum += box[dy + y][dx + x];
		}
	}
	return sum;
}

int main() 
{
	cin >> sizeY >> sizeX;

	int max = 0;
	int my, mx;

	int x, y;
	for (y = 0; y <= 4 - sizeY; y++)
	{
		for (x = 0; x <= 5 - sizeX; x++)
		{
			int ret = sum(y, x);
			if (ret > max)
			{
				max = ret;
				my = y;
				mx = x;
			}
		}
	}

	cout << "(" << my << "," << mx << ")" << endl;
	return 0;
}