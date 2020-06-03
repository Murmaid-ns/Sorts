#include <iostream>
using namespace std;
#define N 13
void SelectionSort(int k, int x[N]); 
void mass(int Arr[N]);

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

void SelectionSort(int k, int Arr[N]) {
	int i, j, min, temp;
	for (i = 0; i < N - 1; i++) {
		//устанавливаем начальное значение минимального индекса
		min = i;
		//находим минимальный индекс элемента
		for (j = i + 1; j < k; j++) {
			if (Arr[j] < Arr[min])
				min = j;
			//меняем значения местами 
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