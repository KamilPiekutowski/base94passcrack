// loppTest.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <time.h>

void foo()
{
	long long int i = 0x800000000;

	char* str = new char[6];

	char ch = i >> (4 * 5);
	int  ich = ch & 0x7f;
	str[0] = ch + 32;

	std::cout << "char is: " << std::hex << ich << " ";

	ch = i >> (4 * 4);
	ich = ch & 0xf;
	str[1] = ch + 32;

	std::cout << std::hex << ich << " ";

	ch = i >> (4 * 3);
	ich = ch & 0xf;
	str[2] = ch + 32;

	std::cout << std::hex << ich << " ";

	ch = i >> (4 * 2);
	ich = ch & 0xf;
	str[3] = ch + 32;

	std::cout << std::hex << ich << " ";

	ch = i >> (4 * 1);
	ich = ch & 0xf;
	str[4] = ch + 32;

	std::cout << std::hex << ich << " ";

	ch = i >> (4 * 0);
	ich = ch & 0xf;
	str[5] = ch + 32;

	std::cout << std::hex << ich << std::endl;
}

void loppIt(long long int* arr, long long int SIZE, int PART_INDEX, int PART_NUM, char* pass)
{
	long long int p_size = SIZE / PART_NUM; //partiion size

	long long int START = PART_INDEX * p_size;
	long long int STOP = START + p_size;

	char* pString = new char[strlen(pass)];

	long long int i = START;

	for (; i < STOP; i++)
	{
		if (!strcmp(pass, pString)) {
			std::cout << "success" << std::endl;
			break;
		}
	}

	std::cout << "PartitionID " << PART_INDEX << " , i = " << std::hex << i << std::endl;
}

int main()
{

	int pass = 0xA34D7;

	char str[4];
	str[3] = '\0'; //null ended string

	

	str[0] = (char) (pass / 94 / 94);
	
	//get first character number
	int num1 = ((int)str[0]) * 94 * 94;

	int a = (pass - num1) / 94;

	str[1] = (char) ((pass - num1) / 94);
	//get second character number
	int num2 = ((int)str[1]) * 94;

	str[2] = (pass - num1 - num2);


	std::cout << str << std::endl;

	system("pause");
    return 0;
}



