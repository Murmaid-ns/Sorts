#include <iostream>
using namespace std;
#define N 13
void mass(int Arr[N]);
void selectionSort(int* num, int size);
void bubbleSort(int a[], int size);

int main() {
	setlocale(0, "");
	cout << "Вариант 8	Нидилько Вячеслав Китз-37" << endl;
	int A[N] = { 49,96,17,1,84,50,20,62,23,2,38,67,68 };
	mass(A);
	cout << "Выберите тип сортировки!" << endl;
	cout << "1. Сортировка простым отбором (выбором)" << endl;
	cout << "2. Сортировка простым обменом (пузырьковая сортировка)" << endl;
	cout << "3. Сортировка методом шейкер-сортировки" << endl;
	cout << "4. Сортировка методом быстрой сортировки" << endl;
	cout << "5. Сортировка методом сортировки простым включением" << endl;
	cout << "6. Сортировка с помощью алгоритма Шелла" << endl;
	cout << "0. Выход" << endl;
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

			default:cout << "Вы ввели неправильно число!";

		}
	} while (n<0||n>6);

}

void mass(int Arr[N]) {
	cout << "Исходный массив чисел: ";
	for (int i = 0; i < 13; i++)
	{
		cout << Arr[i] << " ";
	}
	cout << endl;
}

void selectionSort(int* num, int size)
{
	int min, temp; // для поиска минимального элемента и для обмена
	cout << "Oтсoртированый массив: ";
	for (int i = 0; i < size; i++)
	{
		min = i; // запоминаем индекс текущего элемента
		// ищем минимальный элемент чтобы поместить на место i-ого
		for (int j = i + 1; j < size; j++)  // для остальных элементов после i-ого
		{
			if (num[j] < num[min]) // если элемент меньше минимального,
				min = j;       // запоминаем его индекс в min
		}
		temp = num[i];      // меняем местами i-ый и минимальный элементы
		num[i] = num[min];
		num[min] = temp;
		cout << num[i] << " ";
	}
}


void bubbleSort(int a[], int size){ //пузырьковая сортировка 
	int i, j, counter;
	int x;
    counter = N;
	cout << "Oтсoртированый массив: ";
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