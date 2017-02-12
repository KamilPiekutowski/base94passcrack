// LongIntTest1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <time.h>
#include <thread>

#define BIG long long int



bool loopIt(int pIndex, int pNum, BIG* arr, char* pass, BIG pSIZE)
{
 
	BIG START = pIndex * pSIZE;
	BIG END = START + pSIZE;
	BIG i = START;
	for (; i < END; ++i)
	{
		if (0xabcd == 0xabd) {
			std::cout << "Found password!" << std::endl;
		}
	}

	std::cout << "Partition: " << std::hex << i << std::endl;

	return true;
}



int main()
{

	//2209 partiions 6 character password, 92 characters each

	time_t old_time;
	time_t new_time;

	char* pass = "kamilp";



	BIG WORD = 0xA09F717840;

	int pNum = 2209; //number of partitions

	BIG SIZE = WORD / pNum;

	BIG *arr = new BIG[SIZE];

	BIG i = 0;

	time(&old_time);

	for (int i = 0; i < 2209; i += 47)
	{
		std::thread th1(loopIt, i + 0, pNum, arr, pass, SIZE);
		std::thread th2(loopIt, i + 1, pNum, arr, pass, SIZE);
		std::thread th3(loopIt, i + 2, pNum, arr, pass, SIZE);
		std::thread th4(loopIt, i + 3, pNum, arr, pass, SIZE);
		std::thread th5(loopIt, i + 4, pNum, arr, pass, SIZE);
		std::thread th6(loopIt, i + 5, pNum, arr, pass, SIZE);
		std::thread th7(loopIt, i + 6, pNum, arr, pass, SIZE);
		std::thread th8(loopIt, i + 7, pNum, arr, pass, SIZE);
		std::thread th9(loopIt, i + 8, pNum, arr, pass, SIZE);
		std::thread th10(loopIt, i + 9, pNum, arr, pass, SIZE);

		std::thread th11(loopIt, i + 10, pNum, arr, pass, SIZE);
		std::thread th12(loopIt, i + 11, pNum, arr, pass, SIZE);
		std::thread th13(loopIt, i + 12, pNum, arr, pass, SIZE);
		std::thread th14(loopIt, i + 13, pNum, arr, pass, SIZE);
		std::thread th15(loopIt, i + 14, pNum, arr, pass, SIZE);
		std::thread th16(loopIt, i + 15, pNum, arr, pass, SIZE);
		std::thread th17(loopIt, i + 16, pNum, arr, pass, SIZE);
		std::thread th18(loopIt, i + 17, pNum, arr, pass, SIZE);
		std::thread th19(loopIt, i + 18, pNum, arr, pass, SIZE);
		std::thread th20(loopIt, i + 19, pNum, arr, pass, SIZE);
			
		std::thread th21(loopIt, i + 20, pNum, arr, pass, SIZE);
		std::thread th22(loopIt, i + 21, pNum, arr, pass, SIZE);
		std::thread th23(loopIt, i + 22, pNum, arr, pass, SIZE);
		std::thread th24(loopIt, i + 23, pNum, arr, pass, SIZE);
		std::thread th25(loopIt, i + 24, pNum, arr, pass, SIZE);
		std::thread th26(loopIt, i + 25, pNum, arr, pass, SIZE);
		std::thread th27(loopIt, i + 26, pNum, arr, pass, SIZE);
		std::thread th28(loopIt, i + 27, pNum, arr, pass, SIZE);
		std::thread th29(loopIt, i + 28, pNum, arr, pass, SIZE);
		std::thread th30(loopIt, i + 29, pNum, arr, pass, SIZE);

		std::thread th31(loopIt, i + 30, pNum, arr, pass, SIZE);
		std::thread th32(loopIt, i + 31, pNum, arr, pass, SIZE);
		std::thread th33(loopIt, i + 32, pNum, arr, pass, SIZE);
		std::thread th34(loopIt, i + 33, pNum, arr, pass, SIZE);
		std::thread th35(loopIt, i + 34, pNum, arr, pass, SIZE);
		std::thread th36(loopIt, i + 35, pNum, arr, pass, SIZE);
		std::thread th37(loopIt, i + 36, pNum, arr, pass, SIZE);
		std::thread th38(loopIt, i + 37, pNum, arr, pass, SIZE);
		std::thread th39(loopIt, i + 38, pNum, arr, pass, SIZE);
		std::thread th40(loopIt, i + 39, pNum, arr, pass, SIZE);

		std::thread th41(loopIt, i + 40, pNum, arr, pass, SIZE);
		std::thread th42(loopIt, i + 41, pNum, arr, pass, SIZE);
		std::thread th43(loopIt, i + 42, pNum, arr, pass, SIZE);
		std::thread th44(loopIt, i + 43, pNum, arr, pass, SIZE);
		std::thread th45(loopIt, i + 44, pNum, arr, pass, SIZE);
		std::thread th46(loopIt, i + 45, pNum, arr, pass, SIZE);
		std::thread th47(loopIt, i + 46, pNum, arr, pass, SIZE);

		th1.join();
		th2.join();
		th3.join();
		th4.join();
		th5.join();
		th6.join();
		th7.join();
		th8.join();
		th9.join();
		th10.join();

		th11.join();
		th12.join();
		th13.join();
		th14.join();
		th15.join();
		th16.join();
		th17.join();
		th18.join();
		th19.join();
		th20.join();

		th21.join();
		th22.join();
		th23.join();
		th24.join();
		th25.join();
		th26.join();
		th27.join();
		th28.join();
		th29.join();
		th30.join();

		th31.join();
		th32.join();
		th33.join();
		th34.join();
		th35.join();
		th36.join();
		th37.join();
		th38.join();
		th39.join();
		th40.join();

		th41.join();
		th42.join();
		th43.join();
		th44.join();
		th45.join();
		th46.join();
		th47.join();
	
	}

	time(&new_time);

	std::cout << "Time elapsed: " << new_time - old_time << std::endl;
	system("pause");

	delete arr;





	
    return 0;
}

