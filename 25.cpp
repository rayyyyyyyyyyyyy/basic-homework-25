#include <stdio.h>

#include <stdlib.h>

int main(void)

{

	printf("輸出整個陣列的值\n");

	printf("結果：\n");

    int *p[4];

    int array[4][3]={{1,2,3},{4,5,6},{7,8,9},{10,11,12}};

    int a; 

    p[0]=array[0];

    p[1]=array[1];

    p[2]=array[2];

    p[3]=array[3];


    for (a=0; a<3; a++)

       printf("%d   ", *(p[0]+a));

       printf("\n");

	   

    for (a=0; a<3; a++)

       printf("%d   ", *(p[1]+a));

       printf("\n");

       

    for (a=0; a<3; a++)

       printf("%d   ", *(p[2]+a));

       printf("\n");   

    

	for (a=0; a<3; a++)

       printf("%d   ", *(p[3]+a));

       printf("\n");

    

    system("pause"); 

    return 0; 

}


