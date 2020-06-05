#include <iostream>
using namespace std;
#define N 13
void mass(int Arr[N]);
void selectionSort(int* num, int size);
void bubbleSort(int a[], int size);

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
				selectionSort(A, N);
				break;
			case 2:
				bubbleSort(A,N);
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

void selectionSort(int* num, int size)
{
	int min, temp; // ��� ������ ������������ �������� � ��� ������
	cout << "O��o���������� ������: ";
	for (int i = 0; i < size; i++)
	{
		min = i; // ���������� ������ �������� ��������
		// ���� ����������� ������� ����� ��������� �� ����� i-���
		for (int j = i + 1; j < size; j++)  // ��� ��������� ��������� ����� i-���
		{
			if (num[j] < num[min]) // ���� ������� ������ ������������,
				min = j;       // ���������� ��� ������ � min
		}
		temp = num[i];      // ������ ������� i-�� � ����������� ��������
		num[i] = num[min];
		num[min] = temp;
		cout << num[i] << " ";
	}
}


void bubbleSort(int a[], int size){ //����������� ���������� 
	int i, j, counter;
	int x;
    counter = N;
	cout << "O��o���������� ������: ";
	for (i = 0; i < size; i++)
	{
		for (j = size - 1; j > i; j--)
		{
			if (a[j - 1] > a[j])
			{
				x = a[j - 1];
				a[j - 1] = a[j];
				a[j] = x;
				counter++;
			}
		}
		cout<< a[i] <<" ";
	}
	}