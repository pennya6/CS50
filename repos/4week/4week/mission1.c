////숫자 애너그램 찾기
////1.정렬시키기
////2.두개의 정렬된 숫자 비교 
//#include <stdio.h>
////배열 정렬
//void check_sort(int number1[]) {
//    int temp;
//    for (int i = 0;i < 5;i++) {
//        for (int j = 0;j < 4;j++) {
//            if (number1[j] > number1[j + 1]) {
//                temp = number1[j];
//                number1[j] = number1[j + 1];
//                number1[j + 1] = temp;
//            }
//        }
//    }
//}
////a,b배열의 원소 비교 
//int array_element_equal(int a[], int b[], int size) {
//    int i, j, s1 = 0, s2 = 0;
//    //a확인
//    for (i = 0;i < size;i++)
//        for (j = 0;j < size;j++)
//            if (a[i] == b[j]) {
//                s1++;
//                break;
//            }
//    //b확인
//    for (i = 0;i < size;i++)
//        for (j = 0;j < size;j++)
//            if (b[i] == a[j]) {
//                s2++;
//                break;
//            }
//    //a와 b의 증가값이 같고 size의 값이 같으면 동일
//    if (s1 == s2 &&s1==size) return 1;
//    else return 0;
//}
//   
//int main(void) {
//    int number1[5] = { 1,4,2,5,8 };
//    int number2[5] = { 2,5,4,3,1 };
//    //정렬
//    check_sort(number1);
//    check_sort(number2);
//    
//    //정렬 확인
//    for (int i = 0;i < 5;i++) {
//        printf("%3d",number1[i]);
//    }
//    printf("\n");
//    for (int i = 0;i < 5;i++) {
//        printf("%3d", number2[i]);
//    }
//    printf("\n");
//   
//    int check = array_element_equal(number1, number2, 5);
//    if (check == 1)printf("true");
//    else printf("false");
//}
