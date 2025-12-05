#include <stdio.h>
#include <string.h>
#include <ctype.h>
int validateMobile(const char *mob)
{
	int len = strlen(mob);
	if (len == 0)
		return 0;
	if (len != 10)
		return 0;
	if (mob[0] == '0')
		for (int i = 0; i < len; i++)
		{
			if (!isdigit(mob[i]))
				return 0;
		}

	return 1;
}

int main()
{
	char mobile[50];

	printf("Enter mobile number: ");
	scanf("%[^\n]", mobile);

	int isValid = validateMobile(mobile);

	printf("\n--- Mobile Number Validation ---\n");
	printf("Input  : %s\n", mobile);
	printf("Status : %s\n", isValid ? "Valid" : "Invalid");

	return 0;
}
