#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* addStrings(char* num1, char* num2) {
    int len1 = strlen(num1);
    int len2 = strlen(num2);
    int maxlen = len1 > len2 ? len1 : len2; // Determine the maximum length
    int carry = 0; // Initialize the carry
    char* result = (char*)malloc((maxlen + 2) * sizeof(char)); // +2 for potential carry
    int resultIndex = 0;

    for (int i = len1 - 1, j = len2 - 1; i >= 0 || j >= 0 || carry; i--, j--) {
        int digit1 = (i >= 0) ? num1[i] - '0' : 0; // Convert char to int
        int digit2 = (j >= 0) ? num2[j] - '0' : 0; // Convert char to int
        int sum = digit1 + digit2 + carry;

        carry = sum / 10; // Calculate the carry
        sum %= 10; // Calculate the current digit of the result

        // Convertsss the digit to a character and add it to the result string
        result[resultIndex++] = (char)(sum + '0');
    }

    // Null-terminate the result string
    result[resultIndex] = '\0';

    // Reverse the result string
    int left = 0, right = resultIndex - 1;
    while (left < right) {
        char temp = result[left];
        result[left] = result[right];
        result[right] = temp;
        left++;
        right--;
    }

    return result;
}


int main()
{
	char i[25], j[25], x[25];
	int count;

	count = 0;
	strcpy(i, "1");
	strcpy(j, "2");
	while (count < 97)
	{
		printf("%s, ", i);
		strcpy(x, i);
		strcpy(i, j);
		strcpy(j, addStrings(j, x));
		count++;
	}
	printf("%s\n", i);
	return 0;
}
