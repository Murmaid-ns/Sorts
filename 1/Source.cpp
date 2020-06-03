#include <iostream>
using namespace std;
#define N 13
void SelectionSort(int k, int x[N]); 
void mass(int Arr[N]);
void bubblesort(int* l, int* r);

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
