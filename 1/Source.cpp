#include <iostream>
using namespace std;
#define N 13
void SelectionSort(int k, int x[N]); 
void mass(int Arr[N]);
void bubblesort(int* l, int* r);

int main() {
	setlocale(0, "");
	cout << "������� 8	�������� �������� ����-37" << endl;
	int A[N] = { 49,96,17,1,84,50,20,62,23,2,38,67,68 };
	mass(A);
	cout << "�������� ��� ����������!" << endl;
	cout << "1. ���������� ������� ������� (�������)" << endl;
	cout << "2. ���������� ������� ������� (����������� ����������)" << endl;
	cout << "3. ���������� ������� ������-����������" << endl;
	cout << "4. ���������� ������� ������� ����������" << endl;
	cout << "5. ���������� ������� ���������� ������� ����������" << endl;
	cout << "6. ���������� � ������� ��������� �����" << endl;
	cout << "0. �����" << endl;
	int n;
	cin >> n;
	do
	{
 		switch (n)
		{
			case 1:
				break;
			case 2:
				break;
			case 3:
				break;
			case 4:
				break;
			case 5:
				break;
			case 6:
				break;

			default:cout << "�� ����� ����������� �����!";

		}
	} while (n<0||n>6);

}

void mass(int Arr[N]) {
	cout << "�������� ������ �����: ";
	for (int i = 0; i < 13; i++)
	{
		cout << Arr[i] << " ";
	}
	cout << endl;
}
