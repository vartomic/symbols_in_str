#include <iostream>
#include <string>


int main() {

	char str[] = "Hello world";

	int str_length = sizeof(str) / sizeof(char) - 1; 

	int i = 0;
	int j = 1;

	char* pointer = &str[i];
	char* pointer_2 = &str[j];

	char ch1 = *pointer;
	char ch2 = *pointer_2;

	while (ch1 != *"\0") { //пока аргумент певрого указателя не равен последнему символу

		if (ch1 == ch2 && pointer != pointer_2) { //если аргумент 1-го указателя не равен аргумента 2-го указателя и адрес 1-го указателя не равен адресу 2-го указателя
			std::cout << "string have equal symbols";
			std::cout << ch1;
			break;
		}
		else if (j == str_length) { //если второй указатель равен концу строки
			i++;
			pointer = &str[i]; //1-й указатель на 1 символ вперед
			ch1 = *pointer;
			j = str_length - j + i + 1; //сброс на начало 2-го указателя
		}
		else {
			pointer_2 = &str[j++]; //2-й указатель на 1 символ вперед
			ch2 = *pointer_2;
		}		
	}
}


