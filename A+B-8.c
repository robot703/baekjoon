//알람시계
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int H, M;
	scanf_s("%d %d", &H, &M);

	if (M < 45)
	{
		M = M + 15;

		H = H - 1;
		if (H < 0)
		{
			H = H + 24;
		}
	}
	else //M>=45 여기에 해당, M=45인 경우 여기에 해당!!
	{
		M = M + 15;
		if (M = 60)
		{
			M = 0;
		}
	}
	printf("%d %d", H, M);

	return 0;
}