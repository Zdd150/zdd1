#include <iostream>
using namespace std;
void arrange(int p[], int size);

int main()
{
	int  a;
	int size;
	
	cin >> size;
	int* p = new int[size];
	for (int i = 0; i < size; i++)
	{
		cin >> *(p + 1);
	}
	cout << "动态调试" << endl << "请输入你想要的数组" << endl;
	cin >> a;
	cout << "p[" << a - 1 << "]=" << *(p + a - 1) << endl;
	arrange(p, size);
	for (int b = 0; b < size; b++)
	{
		cout << *(p + b) << "  ";
		cout << endl;
		delete p;
		return 0;
	}
}
void arrange(int p[], int size)
{
	int temp;
	for (int n = 0; n < size; n++)
	{
		for (int m = 0; m < size; m++)
		{
			if (*(p + m) > *(p + m + 1))
			{
				temp = *(p + m);
				*(p + m) = *(p + m + 1);
				*(p + m + 1) = temp;
			}
		}
	}
}