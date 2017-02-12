// loppTest.cpp : Defines the entry point for the console application.
//
// Note the largest 64int unsigned integer can support up to 94^9 base94 number which yields up to 9 character password
//

#include "stdafx.h"
#include <iostream>
#include <time.h>
#include "base94DefinedStructures.h"
#include "base94functions.h"

int main()
{

	base94ToString(123, 2);
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



