/********************************************
 ** Developer		:Abbie Dyck        **
 ** Student ID		:110046150	   **
 ** Program Name	:q3.c	 	   **
 ** Version		:1		   **
 ** Date		:December 12, 2020 **
 ********************************************/
#include <stdio.h>

void append(char str[]);
int replace(char str[], char key[]);

char name[5] = "Abbie";

int main() {
	char string[60], key[15];
	int exists = 0;

	printf("Please enter a string: ");
	scanf("%s", &string);
	printf("Please enter your search keyword: ");
	scanf("%s", &key);
	puts("******");

	exists = replace(string, key);
	if (!exists)
		append(string);
}

void append(char str[]) {
	int counter = 0;

	while (str[counter] != '\0')
		counter++;

	for (int i = 0; i < 5; i++)
		str[counter + i] = name[i];

	str[counter + 5] = '\0';

	printf("New string: %s", str);
}

int replace(char str[], char key[]) {
	int check = 0;
	int begin;
	int stop;
	for (int i = 0; i < 60; i++) {
		if (str[i] == '\0')
			break;
		if (key[0] == str[i]) {
			begin = i;
			for (int n = 0; n < 15; n++) {
				if (str[i + n] == key[n])
					check = 1;
				else if (key[n] == '\0') {
					stop = i + n;
					break;
				} else {
					check = 0;
					break;
				}
			}
		}
	}

	if (check == 1) {
		char end[60];
		int lOfEnd = 0, lOfNewString = 0;

		for (int i = stop; i < 60; i++) {
			if (str[i] == '\0')
				break;
			end[i - stop] = str[i];
			lOfEnd++;
		}

		end[lOfEnd] = '\0';

		for (int i = begin; i < (begin + 5); i++)
			str[i] = name[i - begin];

		for (int i = begin + 5; i < 60; i++) {
			if (end[i - (begin + 5)] == '\0')
				break;
			str[i] = end[i - (begin + 5)];
			lOfNewString++;
		}

		str[begin + 5 + lOfNewString] = '\0';

		printf("The keyword, %s, has been found in the given string :)\n", key);
		puts("******");
		printf("The new string is: %s", str);
		return 1;
	} else {
		printf("The keyword, %s, was not found in the string. :(\n", key);
		puts("******");
		return 0;
	}
}
