#include <stdio.h>

char reverse(char* word);
char reverse(char* word) {
	int i = 0;
	int k = 0;
	while (word[k] != '\0') { //length of word = k
		k++;
	}
	char temp;
	int null = k;
	k = k - 1; //account for null terminator
	while (i < k) {
		temp = word[i];
		word[i] = word[k];
		word[k] = temp;
		i++;
		k--;
	}
	//add null terminator
	word[null] = '\0';
	return 0;
}

