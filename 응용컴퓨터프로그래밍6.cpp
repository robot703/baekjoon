//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include <ctype.h>
//
//using namespace std;
//
//int main() {
//	int xdata=1;
//	int n=0;
//	int ip[5]={0,};
//
//	while (xdata>1)
//	{
//		printf("1~4번 중 한 후보의 번호를 입력하시오 :");
//		scanf("%d", &xdata);
//		if (xdata < 1)
//			break;
//		switch (xdata)
//		{
//		case 1:
//			ip[0]++;
//			break;
//		case 2:
//			ip[1]++;
//			break;
//		case 3:
//			ip[2]++;
//			break;
//		case 4:
//			ip[3]++;
//			break;
//		default :
//			ip[4]++;
//			break;
//		}
//		
//		n++;
//	}
//	for (int i = 0; i < 4; i++)
//		printf("%d번 : %d표\n", i + 1, ip[i]);
//	printf("무효표 : %d표, 총 %d표",ip[4],n);
//
//}