#include <iostream>
using namespace std;
#define N 13
void SelectionSort(int k, int x[N]); 
void mass(int Arr[N]);

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
				SelectionSort;
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

void SelectionSort(int k, int Arr[N]) {
	int i, j, min, temp;
	for (i = 0; i < N - 1; i++) {
		//������������� ��������� �������� ������������ �������
		min = i;
		//������� ����������� ������ ��������
		for (j = i + 1; j < k; j++) {
			if (Arr[j] < Arr[min])
				min = j;
			//������ �������� ������� 
		}
		temp = Arr[i];
		Arr[i] = Arr[min];
		Arr[min] = temp;
	}
}

void bubblesort(int* l, int* r) {
	int sz = r - l;
	if (sz <= 1) return;
	bool b = true;
	while (b) {
		b = false;
		for (int* i = l; i + 1 < r; i++) {
			if (*i > * (i + 1)) {
				swap(*i, *(i + 1));
				b = true;
			}
		}
		r--;
	}
}