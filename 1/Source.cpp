#include <iostream>
using namespace std;
#define N 13
void mass(int Arr[N]);
void selectionSort(int* num, int size);
void bubbleSort(int a[], int size);
void shekerSort(int* mass, int count);
void quickSort(int* numbers, int left, int right);
void InsertSort(int k, int x[N]);
void ShellSort(int n, int mass[]);

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
	cout << "5. C��������� ������� ����������" << endl;
	cout << "6. ���������� � ������� ��������� �����" << endl;
	cout << "0. �����" << endl;
	int n;
	cin >> n; 
	cout << endl;
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
				shekerSort(A,N);
				break;
			case 4:
				quickSort(A,0,N-1);
				cout << "O��o����������� ������: ";
				for (int i = 0; i < N; i++) { cout << A[i] << " "; }
				break;
			case 5:
				InsertSort(N,A);
				break;
			case 6:
				ShellSort(N, A);
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
	cout << "O��o����������� ������: ";
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
	cout << "O��o����������� ������: ";
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



void shekerSort(int* mass, int count)
{
	int left = 0, right = count - 1; // ����� � ������ ������� ����������� ������� �������
	int flag = 1;  // ���� ������� �����������
	// ���������� ����� ���� ����� ������� �� �������� � ������
	// � ���� � ������� ������� �����������
	while ((left < right) && flag > 0)
	{
		flag = 0;
		for (int i = left; i < right; i++)  //��������� ����� �������
		{
			if (mass[i] > mass[i + 1]) // ���� ��������� ������� ������ ��������,
			{             // ������ �� �������
				double t = mass[i];
				mass[i] = mass[i + 1];
				mass[i + 1] = t;
				flag = 1;      // ����������� � ���� ����� ����
			}
		}
		right--; // �������� ������ ������� �� ���������� �������
		for (int i = right; i > left; i--)  //��������� ������ ������
		{
			if (mass[i - 1] > mass[i]) // ���� ���������� ������� ������ ��������,
			{            // ������ �� �������
				double t = mass[i];
				mass[i] = mass[i - 1];
				mass[i - 1] = t;
				flag = 1;    // ����������� � ���� ����� ����
			}
		}
		left++; // �������� ����� ������� �� ��������� �������
	}
	cout << "O��o����������� ������: ";
	for (int i = 0; i < N; i++)
	{
		cout << mass[i] << " ";
	}
}



void quickSort(int* numbers, int left, int right)
{
	int pivot; // ����������� �������
	int l_hold = left; //����� �������
	int r_hold = right; // ������ �������
	pivot = numbers[left];
	while (left < right) // ���� ������� �� ���������
	{
		while ((numbers[right] >= pivot) && (left < right))
			right--; // �������� ������ ������� ���� ������� [right] ������ [pivot]
		if (left != right) // ���� ������� �� ����������
		{
			numbers[left] = numbers[right]; // ���������� ������� [right] �� ����� ������������
			left++; // �������� ����� ������� ������
		}
		while ((numbers[left] <= pivot) && (left < right))
			left++; // �������� ����� ������� ���� ������� [left] ������ [pivot]
		if (left != right) // ���� ������� �� ����������
		{
			numbers[right] = numbers[left]; // ���������� ������� [left] �� ����� [right]
			right--; // �������� ������ ������� ������
		}
	}
	numbers[left] = pivot; // ������ ����������� ������� �� �����
	pivot = left;
	left = l_hold;
	right = r_hold;
	if (left < pivot) { // ���������� �������� ���������� ��� ����� � ������ ����� �������
		quickSort(numbers, left, pivot - 1);
	}
	if (right > pivot) {
		quickSort(numbers, pivot + 1, right);
	}

}


void InsertSort(int k, int x[N]) {
	int i, j, temp;
	for (i = 0; i < k; i++) {
		//���� ��������, i - ����� �������
		temp = x[i];
		//����� ����� ��������
		for (j = i - 1; j >= 0 && x[j] > temp; j--)
			x[j + 1] = x[j];//�������� ������� ������, ���� �� �����
			//����� �������, �������� ������� 
		x[j + 1] = temp;
	}
	cout << "��������������� ������: ";
	for (i = 0; i < N; i++)
	{
		cout << x[i] << " ";
	}
}


void ShellSort(int n, int mass[])
{
	int i, j, step;
	int tmp;
	for (step = n / 2; step > 0; step /= 2)
		for (i = step; i < n; i++)
		{
			tmp = mass[i];
			for (j = i; j >= step; j -= step)
			{
				if (tmp < mass[j - step])
					mass[j] = mass[j - step];
				else
					break;
			}
			mass[j] = tmp;
		}
	cout << "��������������� ������: ";
	for (i = 0; i <N; i++)
	{
		cout << mass[i] << " ";
	}
}