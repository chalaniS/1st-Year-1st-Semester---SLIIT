#include<stdio.h>
#include<string.h>

//Q - 2

//int main() {
//	int x;
//	char arr[10];
//	
//	printf("Enter a word: ");
//	scanf("%5s", arr);
//	
//	x = strlen(arr);
//	printf("%s %d", arr, x);
//	
//	return 0;
//}


//Q - 3

//int main() {
//	char str1[10] ;
//	char str2[10];
//	str1[20]= "HELLOooooooooooooooooooooooooooooooooabcdefg";
//	
//	strcpy(str2,str1);
//	
//	printf("%s", str2);
//	
//	return 0;
//}


//Q - 7

//int main() {
//	int marks[10] = {80,30,23,78,98,47,39,40,10,89};
//	int i, check = 0;
//	
//	for(i = 0; i < 10; ++i) {
//		if(marks[i] > 100 || marks[i] < 0) {
//			check = 1;
//		}
//	}
//	
//	if(check == 1) {
//		printf("Marks are not valid");
//	}else {
//		printf("Marks are valid");
//	}
//	
//	return 0;
//}


//Q - 8

//void modifyArray(float arr[], int size);
//int main() {
//	float x[5] = {2,8,3,9,10};
//	
//	modifyArray(x,5);
//	
//	return 0;
//}
//
//void modifyArray(float arr[], int size) {
//	int i;
//	
//	for(i = 0; i < size; ++i) {
//		arr[i] *= 110 / 100.0;
//		printf("%.2f ", arr[i]);
//	}
//}


//Q - 10

//void changeArray(int arr[], int size);
//int main() {
//	int A[5] = {2,8,3,9,10};
//	
//	changeArray(A,5);
//	
//	return 0;
//}
//
//void changeArray(int arr[], int size) {
//	int i;
//	
//	for(i = 0; i < size; ++i) {
//		arr[i] += 4;
//		printf("%d ", arr[i]);
//	}
//}


//Q - 11

//int main() {
//	char newArr[100];
//	int i, check = 0, len;
//	
//	printf("Input word: ");
//	scanf("%s", newArr);
//	
//	len = strlen(newArr);
//	
//	for(i = 0; i < len; ++i) {
//		if(newArr[i] < 97) {
//			++check;
//		}
//	}
//	
//	printf("No of uppercase letters: %d", check);
//	
//	return 0;
//}


//Q - 12

//int main() {
//	int numbers[10] = {2,6,8,10,4,2,6,14,20,16};
//	int n, i, check = 0;
//	
//	printf("Input the value of n: ");
//	scanf("%d", &n);
//	
//	for(i = 0; i < 10; ++i) {
//		if(numbers[i] % n == 1) {
//			++check;
//		}
//	}
//	
//	if(check == 0) {
//		printf("Divisible by %d", n);
//	}else {
//		printf("Not divisible by %d", n);
//	}
//	
//	return 0;
//}


//Q - 25

//int main() {
//	int num[5] = {5};
//	int i;
//	
//	for(i = 0; i < 5; ++i) {
//		printf("%d", num[i]);
//	}
//	
//	return 0;
//}


//Q - 37

//int main() {
//	char myArr[100];
//	int i, len;
//	
//	printf("Input a word: ");
//	scanf("%s", myArr);
//	
//	len = strlen(myArr);
//	
//	for(i = 0; i < len; ++i) {
//		if(myArr[i] > 90) {
//			myArr[i] = 42;    // myArr[i] = '*';
//		}
//	}
//	
//	printf("%s", myArr);
//	
//	return 0;
//}


//Q - 50

//int main() {
//	int arr1D[12];
//	int arr2D[3][4];
//	int i, j, a = 0;
//	
//	for(i = 0; i < 12; ++i) {
//		scanf("%d", &arr1D[i]);
//	}
//	
//	printf("\n1D Arr: \n");
//	for(i = 0; i < 12; ++i) {
//		printf("%d ", arr1D[i]);
//	}
//	
//	printf("\n\n2D Arr: \n");
//	printf("\n");
//	for(i = 0; i < 3; ++i) {
//		for(j = 0; j < 4; ++j) {
//			arr2D[i][j] = arr1D[a];
//			++a;
//			printf("%d ", arr2D[i][j]);
//		}
//		printf("\n");
//	}
//	
//	return 0;
//}


//Q - 54

//int main() {
//	int myArr1D[12];
//	int myArr2D[4][3];
//	int i, j, a = 0;
//	
//	for(i = 0; i < 12; ++i) {
//		scanf("%d", &myArr1D[i]);
//	}
//	
//	for(j = 0; j < 3; ++j) {
//		for(i = 0; i < 4; ++i) {
//			myArr2D[i][j] = myArr1D[a];
//			++a;
//		}
//	}
//	
//	printf("\n1D Arr: \n");
//	for(i = 0; i < 12; ++i) {
//		printf("%d ", myArr1D[i]);
//	}
//	
//	printf("\n\n2D Arr: \n");
//	for(i = 0; i < 4; ++i) {
//		for(j = 0; j < 3; ++j) {
//			printf("%d ", myArr2D[i][j]);
//		}
//		printf("\n");
//	}
//	
//	return 0;
//}
