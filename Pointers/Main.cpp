#include <iostream>

void my_swap(int num1, int num2) {
	int tmp = num1;
	num1 = num2;
	num2 = tmp;
}
void p_swap(int* var1, int* var2) {
	int tmp = *var1;
	*var1 = *var2;
	*var2 = tmp;
}

template <typename T>
void arr_sum(T arr[], const int length, T* var);


int main() {
	setlocale(LC_ALL, "Russian");
	int n, m;
	// Указатели на переменные
	/*n = 7;
	std::cout << "n = " << n << std::endl; // n = 7
	std::cout << "&n = " << &n << std::endl; // шестнадцатиричный код так как & - операция обращения к адресу

	int* pn = &n; // указатель на область памяти типа int, направленный на переменную n
	std::cout << "pn = " << pn << std::endl; // адрес n

	std::cout << "*pn = " << *pn << std::endl; // 7 разименование - это операция, применяемая к указаетлям и позволяющая обратится к той области памяти,на которую направлен указатель. 
	//Через разименование можно обратиьтся к элементу так, словно мы обращаемся к нему по его имени. 
	*pn = 15;
	std::cout << "n = " << n << std::endl;
	std::cout << "__________________________\n";
	m = 42;
	std::cout << "m = " << m << std::endl;
	std::cout << "&m = " << &m << std::endl;

	pn = &m; // перенаправление указателя на переменную m
	std::cout << "pn = " << pn << std::endl;
	*pn = 100;
	std::cout << "m = " << m << std::endl;

	int* pm = &m;
	std::cout << "pm = " << pm << std::endl;*/

	// Указатели и массивы
	/*const int size = 5;
	int arr[size]{ 30, 40, 50, 60 , 70 };
	//				0  1   2   3    4
	int* parr = &arr[2];

	std::cout << *parr << std::endl; // 50 
	std::cout << *parr + 1 << std::endl; // 51
	std::cout << parr << std::endl;
	std::cout << parr + 1 << std::endl;
	std::cout << *(parr + 1) << std::endl; // 60
	parr -= 2;
	std::cout << *parr << std::endl; // 30
	std::cout << arr << std::endl; // адрес первого элемента массива

	std::cout << "Массив, выведенный через указатель: \n";
	for (int i = 0; i < size; i++)
		//           arr[i]
		std::cout << *(parr + i) << ' ';
	std::cout << std::endl;*/

	// Указатели как параметры функций
	/*n = 7; m = 15;
	std::cout << "n = " << n << "; m = " << m << std::endl; // 7 и 15
	// my_swap(n, m); // не работает так как параметры это лишь копии аргументов.
	// std::cout << "n = " << n << "; m = " << m << std::endl;
	p_swap(&n, &m);
	std::cout << "n = " << n << "; m = " << m << std::endl;*/

	// Задача 1. Сумма в указатель
	std::cout << "Задача 1. \nМассив:\n";
	const int size1 = 5;
	int arr1[size1]{ 15, 5, 6, 13, 1 };
	for (int i = 0; i < size1; i++)
		std::cout << *(arr1 + i) << ' ';
	std::cout << std::endl;
	
	int result;
	arr_sum(arr1, size1, &result);
	std::cout << "Сумма его элементов: " << result << std::endl;

	return 0;
}
template <typename T>
void arr_sum(T arr[], const int length, T* var) {
	*var = 0;
	for (int i = 0; i < length; i++)
	*var += *(arr + i);
}
