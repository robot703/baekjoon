#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
    char arr1[4] = "";
    char arr2[4] = "";

    scanf("%s %s", arr1, arr2);



    for (int i = 2; i >= 0; i--) {

        if (arr1[2] > arr2[2])
        {
            for (int i = 2; i >= 0; i--)
                printf("%c", arr1[i]);
            break;
        }

        else if (arr1[2] < arr2[2])
        {
            for (int i = 2; i >= 0; i--)
                printf("%c", arr2[i]);
            break;
        }
        else if (arr1[2] == arr2[2])
            if (arr1[1] > arr2[1])
            {
                for (int i = 2; i >= 0; i--)
                    printf("%c", arr1[i]);
                break;
            }
        else if (arr1[2] == arr2[2])
            if (arr1[1] < arr2[1])
            {
                for (int i = 2; i >= 0; i--)
                    printf("%c", arr2[i]);
                break;
            }
        else if (arr1[2] == arr2[2])
            if (arr1[1] == arr2[1])
                if (arr1[0] > arr2[0])
                {
                    for (int i = 2; i >= 0; i--)
                        printf("%c", arr1[i]);
                }
                else
                {
                    for (int i = 2; i >= 0; i--)
                        printf("%c", arr2[i]);
                }
        break;
    }
}