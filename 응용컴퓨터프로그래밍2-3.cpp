//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//double operation(double num1, double num2, char c);
//
//int main() {
//    double num1, num2;
//    char op;
//
//    printf("첫 번째 수를 입력하세요: ");
//    scanf("%lf", &num1);
//    printf("두 번째 수를 입력하세요: ");
//    scanf("%lf", &num2);
//    printf("연산자를 입력하세요: ");
//    scanf(" %c", &op);
//
//    double result = operation(num1, num2, op);
//
//    printf("결과: %.1lf\n", result);
//
//    return 0;
//}
//
//double operation(double num1, double num2, char c) {
//    double result;
//
//    switch (c) {
//    case '+':
//        result = num1 + num2;
//        break;
//    case '-':
//        result = num1 - num2;
//        break;
//    case '/':
//        result = num1 / num2;
//        break;
//    case '*':
//        result = num1 * num2;
//        break;
//    default:
//        printf("잘못된 연산자입니다.\n");
//        result = 0;
//    }
//
//    return result;
//}
