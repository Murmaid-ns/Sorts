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
	cout << "Вариант 8	Нидилько Вячеслав Китз-37" << endl;
	int A[N] = { 49,96,17,1,84,50,20,62,23,2,38,67,68 };
	mass(A);
	cout << "Выберите тип сортировки!" << endl;
	cout << "1. Сортировка простым отбором (выбором)" << endl;
	cout << "2. Сортировка простым обменом (пузырьковая сортировка)" << endl;
	cout << "3. Сортировка методом шейкер-сортировки" << endl;
	cout << "4. Сортировка методом быстрой сортировки" << endl;
	cout << "5. Cортировки простым включением" << endl;
	cout << "6. Сортировка с помощью алгоритма Шелла" << endl;
	cout << "0. Выход" << endl;
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
				cout << "Oтсoртированный массив: ";
				for (int i = 0; i < N; i++) { cout << A[i] << " "; }
				break;
			case 5:
				InsertSort(N,A);
				break;
			case 6:
				ShellSort(N, A);
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
	cout << "Oтсoртированный массив: ";
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
	cout << "Oтсoртированный массив: ";
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
	int left = 0, right = count - 1; // левая и правая границы сортируемой области массива
	int flag = 1;  // флаг наличия перемещений
	// Выполнение цикла пока левая граница не сомкнётся с правой
	// и пока в массиве имеются перемещения
	while ((left < right) && flag > 0)
	{
		flag = 0;
		for (int i = left; i < right; i++)  //двигаемся слева направо
		{
			if (mass[i] > mass[i + 1]) // если следующий элемент меньше текущего,
			{             // меняем их местами
				double t = mass[i];
				mass[i] = mass[i + 1];
				mass[i + 1] = t;
				flag = 1;      // перемещения в этом цикле были
			}
		}
		right--; // сдвигаем правую границу на предыдущий элемент
		for (int i = right; i > left; i--)  //двигаемся справа налево
		{
			if (mass[i - 1] > mass[i]) // если предыдущий элемент больше текущего,
			{            // меняем их местами
				double t = mass[i];
				mass[i] = mass[i - 1];
				mass[i - 1] = t;
				flag = 1;    // перемещения в этом цикле были
			}
		}
		left++; // сдвигаем левую границу на следующий элемент
	}
	cout << "Oтсoртированный массив: ";
	for (int i = 0; i < N; i++)
	{
		cout << mass[i] << " ";
	}
}



void quickSort(int* numbers, int left, int right)
{
	int pivot; // разрешающий элемент
	int l_hold = left; //левая граница
	int r_hold = right; // правая граница
	pivot = numbers[left];
	while (left < right) // пока границы не сомкнутся
	{
		while ((numbers[right] >= pivot) && (left < right))
			right--; // сдвигаем правую границу пока элемент [right] больше [pivot]
		if (left != right) // если границы не сомкнулись
		{
			numbers[left] = numbers[right]; // перемещаем элемент [right] на место разрешающего
			left++; // сдвигаем левую границу вправо
		}
		while ((numbers[left] <= pivot) && (left < right))
			left++; // сдвигаем левую границу пока элемент [left] меньше [pivot]
		if (left != right) // если границы не сомкнулись
		{
			numbers[right] = numbers[left]; // перемещаем элемент [left] на место [right]
			right--; // сдвигаем правую границу вправо
		}
	}
	numbers[left] = pivot; // ставим разрешающий элемент на место
	pivot = left;
	left = l_hold;
	right = r_hold;
	if (left < pivot) { // Рекурсивно вызываем сортировку для левой и правой части массива
		quickSort(numbers, left, pivot - 1);
	}
	if (right > pivot) {
		quickSort(numbers, pivot + 1, right);
	}

}


void InsertSort(int k, int x[N]) {
	int i, j, temp;
	for (i = 0; i < k; i++) {
		//цикл проходов, i - номер прохода
		temp = x[i];
		//поиск места элемента
		for (j = i - 1; j >= 0 && x[j] > temp; j--)
			x[j + 1] = x[j];//сдвигаем элемент вправо, пока не дошли
			//место найдено, вставить элемент 
		x[j + 1] = temp;
	}
	cout << "Отсортированный массив: ";
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
	cout << "Отсортированный массив: ";
	for (i = 0; i <N; i++)
	{
		cout << mass[i] << " ";
	}
}