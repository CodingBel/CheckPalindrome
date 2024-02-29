#include <iostream>

int checkPalindrome(const char* str) { // radar   // wow
	const char* ptr = nullptr; 
	ptr = &str[0];

	int lastElement = -1;
	while (*ptr != NULL) {
		lastElement++;
		ptr++;
	}

	ptr = &str[0]; 
	for (int i = 0; i < lastElement / 2; i++) {
		if (*(ptr + i) != *(ptr + (lastElement - i)))
			return 0;
	}

	return 1; 
}

int main()
{
	std::cout << checkPalindrome("Abel") << std::endl;
	std::cout << checkPalindrome("radar") << std::endl;
	std::cout << checkPalindrome("wow") << std::endl;

    return 0; 
}


