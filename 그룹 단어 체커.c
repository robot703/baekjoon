#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main() {//전체적인 로직은 문자열을 입력받고 맨앞 문자를 다른 변수에 저장하여 문자열에 하나씩 대조해보며 조건을 걸어준다.
	char arr[100];// 문자열 저장 배열
	int intarr[100] = { 0 };// 같은 문자가 나왔을 경우 인덱스번호를 저장하는 배열
	int n = 0, num = 0, count = 0, group = 0, k = 0;
	char* parr;
	parr = &arr;//포인터를 선언하여 배열주소를 복사해줬다.

	scanf("%d", &n);// 문자열 받을 개수 입력

EXIT://강제로 이동하는 위치(문자를 새로받는다)
	while (k != n) {// 입력한 개수 만큼 반복

		scanf("%s", arr);//문자열 입력
		for (int j = 0; j < strlen(arr); j++) {//문자열 전체 
			for (int i = 0; i < strlen(arr); i++) {//문자열을 앞에서 부터 대조
				if (arr[i] == *(parr + j)) {//첫번째 문자가 문자열과 대조하면서 같을 경우 문자가 들어있는 인덱스를 인덱스저장 배열에 입력

					intarr[num] = i;
					num++;//다음 인덱스에 저장될 수 있도록 증가
				}
			}
			
			//한글자.두글자인 경우 바로 그롭단어 증가후 반복문 탈출
				if (intarr[0]==0 && intarr[1] == 0 &&(strlen(arr)==1)|| (strlen(arr) == 2)) {
					count++;
					k++;//전체적인 루틴(while문)한번 돌린다는 의미이다
					for (int i = 0; i < 10; i++)//인덱스배열은 0으로 초기화해 다시 받을 수 있도록 한다.
						intarr[i] = 0;
					group++;
					goto EXIT; //강제로 새로운 문자 입력하는 곳으로 이동한다.
					
				}
				
				
			//세글자 이상인 경우 한글자씩 대조
			for (int a = 0; a < num-1; a++) {
				//배열[0], 배열[1] 끼리 비교하여 차이 절댓값이 1인 경우or 같아서 0인 경우|| 한글자일경우를 조건을 줬다.
				if (((intarr[a + 1] - intarr[a]) == 1) || ((intarr[a + 1] - intarr[a]) == -1) || ((intarr[a + 1] - intarr[a]) == 0)) {


					count++;//맞을 경우 count를 증가시킨다.
					
				}
				else {//위의 조건이 하나라도 만족 못하면 안되기 때문에 count를 0으로 초기화 해준다.
					count = 0;
					k++;//전체적인 루틴(while문)한번 돌린다는 의미이다
					for (int i = 0; i < 100; i++)//인덱스배열은 0으로 초기화해 다시 받을 수 있도록 한다.
						intarr[i] = 0;
					goto EXIT;//문자하나씩 대조해서 하나라도 조건에 만족못하면 더 이상 대조할 필요가 없기 때문에 강제로 새로운 문자 입력하는 곳으로 이동한다.
				}

			}




			num = 0;
			for (int i = 0; i < 100; i++)//조건에 성립했을 때 인덱스배열 초기화 해주는 반복문
				intarr[i] = 0;

		}
		if (count >= 1)//문자열 하나가 대조를 끝내고 count개수가 1이상이면 그룹단어 개수를 증가시킨다.
			group += 1;
		k++;//조건 성립했을 경우, 전체적인 루틴(while문)한번 돌린다는 의미이다

	}
	printf("%d", group);//최종 반복문(while)이 끝나고 그룹 단어가 몇개인지 출력한다.


}