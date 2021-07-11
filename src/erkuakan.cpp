#include"matrix.hpp"
int* erkuakan (int number, int& length){
	int BinNum = 0;
	int i = 1;
	while(number != 0) {
		int remainder = number % 2;
		BinNum = BinNum + remainder * i;
		i *= 10;
		number /= 2;
	}
	number = BinNum;
	while(number != 0) {
		number /= 10;
		++length;
	}
	int* BinaryArray = new int[length];
	for(int j = 0; j < length; ++j) {
		BinaryArray[j] = BinNum % 10;
		BinNum = BinNum / 10;
	}

	return BinaryArray;
}
