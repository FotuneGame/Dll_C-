#include <iostream>

using namespace std;
extern "C"
{

	__declspec(dllexport)
		void  print_arr(char* arr, int arr_length = 36) {
		for (int i = 0; i < arr_length; i++)cout << arr[i];
	}

	__declspec(dllexport)
		void write_arr(char* arr, int arr_length = 36) {
		for (int i = 0; i < arr_length; i++)cin >> arr[i];
	}

	__declspec(dllexport)
		void delete_equals_symbl(char* arr, int arr_length = 36) {
		char flag;
		for (int i = 0; i < arr_length; i++) {
			flag = false;
			for (int j = i + 1; j < arr_length; j++) {
				if (arr[i] == arr[j]) {
					arr[j] = ' ';
					flag = true;
				}
			}
			if (flag)arr[i] = ' ';
		}
	}

}