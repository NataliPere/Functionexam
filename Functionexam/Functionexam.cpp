#include <iostream>

template<typename T>
void clear_arr(T arr[], const int length, int num) {
	for (int i = 0; i < length; i++) {
		if (arr[i] == num)
			arr[i] = 0;
	}
}

template<typename T>
void show_arr(T arr[], const int length) {
	std::cout << "[";
	for (int i = 0; i < length; i++)
		std::cout << arr[i] << ", ";
	std::cout << "\b\b]\n";
}

int index_sum(int arr1[], int arr2[], int index, const int length1, const int length2) {
	if (index < length1 && index < length2 && index >= 0)
		return arr1[index] + arr2[index];
	else
		std::cout << "ERROR \n";
	return 0;
}

template<typename T>
T mean_arr(T arr[], const int length) {
	std::cout << " [ ";
	for (int i = 0; i < length; i++) {
		std::cout << arr[i] << ", ";
	}
	std::cout << "\b\b]\n";

	T max = arr[0];
	for (int i = 0; i < length; i++) {
		if (max < arr[i])
			max = arr[i];
	}

	T min = arr[0];
	for (int i = 0; i < length; i++) {
		if (min > arr[i])
			min = arr[i];
	}
	return (max + min) / 2;
}

void prime_range(int num1, int num2) {
	for (int i = num1; i < num2; i++) {
		int counter = 1;
		for (int j = 1; j <= i / 2; j++)
			if (i % j == 0)
				counter++;
		if (counter == 2)
			std::cout << i << ", ";
	}
	std::cout << "\b\b.\n";
}

int main() {
	setlocale(LC_ALL, "Russian");
	int n, m, A, B;

	std::cout << "������ 1.��������� ��������� ��������. \n";
	const int size = 10;
	int arr[] = { 2, 3, 8, 21, 5, -9, 0, 7, 15, 1 };
	std::cout << "�������� ������ : ";
	std::cout << "[";
	for (int i = 0; i < size; i++)
	std::cout << arr[i] << ", ";
	std::cout << "\b\b]\n";
	std::cout << "������� ��������: ";
	std::cin >> n;
	clear_arr(arr, size, n);
	std::cout << "�������� ������ � ���������� ��������, ������ ��������� ��������: ";
	show_arr(arr, size);
	std::cout << "\n";

	std::cout << "������ 2.����� ��������� ���� ��������, ��� ��������� ��������. \n";
	const int size1 = 5;
	int arr1[] = { 1, 2, 3, 4, 5 };
	std::cout << "������ ������: ";
	std::cout << "[";
	for (int i = 0; i < size1; i++)
	std::cout << arr1[i] << ", ";
	std::cout << "\b\b]\n";

	const int size2 = 5;
	int arr2[] = { 6, 7, 8, 9, 10 };
	std::cout << "������ ������: ";
	std::cout << "[";
	for (int i = 0; i < size2; i++)
		std::cout << arr2[i] << ", ";
	std::cout << "\b\b]\n";
	std::cout << "������� ��������(������): ";
	std::cin >> m;
	std::cout << index_sum(arr1, arr2, m, size1, size2) << "\n";
	std::cout << "\n";

	std::cout << "������ 3. ������� �������������� ������������� � ������������ ��������� �������. \n";
	std::cout << "M�����: ";
	const int size3 = 10;
	double arr3[size3] = { 2, 5, -6, 7, 3, 9, -2, 4, -8, 25 };
	std::cout << "������� �������������� ������������� � ������������ ��������� �������: " <<
	mean_arr(arr3, size3);
	std::cout << "\n\n";


	std::cout << "������ 4.����� ������� ����� ���������� � ��������� �� A �� B. \n";
	std::cout << "������� ������ ���������: ";
	std::cin >> A;
	std::cout << "������� ������ ���������: ";
	std::cin >> B;
	std::cout << "������� ����� � ��������� ���������: ";
	prime_range(A, B);

	return 0;
}
