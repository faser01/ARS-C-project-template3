// ѕерсон6альный шаблон —++
#include < iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


template <typename T> void fillarr(T arr[], int length, int max, int min);
template <typename T> void showarr(T arr[], int length);


template <typename T> void addel(T *&arr, int length, int n);

template <typename T> void del(T *&arr, int length, int n);



int main() {
	setlocale(LC_ALL, "Russian");
		//динамические переменные;
	/*int* pn = new int;
	*pn = 10;
	cout << *pn << endl;
	cout << pn << "\n\n";
	delete pn;
	pn = nullptr;
		
	pn = new int;

	if (pn != nullptr) {
		*pn = 65;
		cout << *pn << endl;
		cout << pn << "\n\n";
		delete pn;
	}
	else
		cout << " указатель не инициализирован\n";*/


	//динамические массивы
	/*int size;
	cout << "¬ведите размер массива";
	cin >> size;
	int* darr = new int[size];
	fillarr(darr, size, 10, 31);
	cout << " »тоговый массив\n";
	showarr(darr, size);
	delete[] darr;*/


	/*int size1;
	cout << "задача 1\n¬ведите размер массива";
	cin >> size1;
	int* z1 = new int[size1];
	fillarr(z1, size1, 10, 20);
	cout << "изначальный массив\n";
	showarr(z1, size1);
	int newS1;
	cout << "¬ведите количество €чеек ";
	cin >> newS1;
	addel(z1, size1, newS1);
	if(newS1>0)
	size1 += newS1;
	cout<< "итоговый масив \n";
	showarr(z1, size1);
	delete[] z1;*/

	int size2;
	cout << "задача 1\n¬ведите размер массива";
	cin >> size2;
	int* z2 = new int[size2];
	fillarr(z2, size2, 10, 20);
	cout << "изначальный массив\n";
	showarr(z2, size2);
	int newS2;
	cout << "¬ведите количество €чеек ";
	cin >> newS2;
	del(z2, size2, newS2);
	if (newS2 > 0)
		size2 -= newS2;
	cout << "итоговый масив \n";
	showarr(z2, size2);
	delete[] z2;


	return 0;
}


template < typename T> void fillarr(T arr[], int length, int min, int max) {
	srand(time(NULL));
	for (int i = 0; i < length; i++)
		arr[i] = rand() % (max - min) + min;
}




template < typename T> void showarr(T arr[], int length ) {
	for (int i = 0; i = length; i++)
		cout << arr[i] << ", " ;
	cout << "\b\b";
}

template <typename T> void addel(T *&arr, int length, int n) {
	if (n <= 0)
		return;
	T* tmp = new T[length + n];
	for (int i = 0; i < length; i++)
		tmp[i] = arr[i];
	delete[]arr;
	arr = tmp;

}
template <typename T> void del(T *& arr, int length, int n) {
	if (n <= 0|| n >=length)
		return;
	T* tmp = new T[length - n];
	for (int i = 0; i < length-n; i++)
		tmp[i] = arr[i];
	delete[]arr;
	arr = tmp;
}
