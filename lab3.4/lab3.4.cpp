// Lab_03_4.cpp
// ������ ������ �����������
// ����������� ������ � 3.4
// ������������, ������ ������� �������.
// ������ 15

#include <iostream>

using namespace std;


int main()
{
	double x; // ������� ��������
	double y; // ������� ��������
	double R; // ������� ��������

	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	cout << "R = "; cin >> R;

	// ������������ � ����� ����
	if ((x + R) * (x + R) + (y - R) * (y - R) <= R * R && x <= 0 && y >= 0 || 
	   ( x * x + y * y <= R * R ))
          cout << "yes" << endl;
	else
		cout << "no" << endl;

	cin.get();
	return 0;
}