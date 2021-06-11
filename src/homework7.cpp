#include <cstdio>
#include <iostream>
#include "print.h"

//    Описать макрокоманду, проверяющую, входит ли переданное ей число 
//    в диапазон от нуля (включительно) до переданного ей второго аргумента (исключительно)
#define INRANGE(x,y) (((x) >= 0 && (x) < (y)) ? (true) : (false))

//    Описать макрокоманду, получающую доступ к элементу двумерного массива (организованного динамически) посредством разыменования указателей
#define GET_ARR_EL(name,x,y) (*(*((name)+(x))+(y)))

//    * Описать макрокоманду, возвращающую количество элементов локального массива, принимающую на вход ссылку на массив и его тип
#define GET_ARR_SIZE(array_,type_) (sizeof(array_)/sizeof(type_))

int main() {

#if (INRANGE(0,3))
    printf("0 is in range 0..3 (including 0, excluding 3)\n");
#else
    printf("0 is not in range 0..3 (including 0, excluding 3)\n");
#endif
#if (INRANGE(-1,3))
    printf("-1 is in range 0..3 (including 0, excluding 3)\n");
#else
    printf("-1 is not in range 0..3 (including 0, excluding 3)\n");
#endif
#if (INRANGE(2,3))
    printf("2 is in range 0..3 (including 0, excluding 3)\n");
#else
    printf("2 is not in range 0..3 (including 0, excluding 3)\n");
#endif
#if (INRANGE(3,3))
    printf("3 is in range 0..3 (including 0, excluding 3)\n");
#else
    printf("3 is not in range 0..3 (including 0, excluding 3)\n");
#endif
#if (INRANGE(4,3))
    printf("4 is in range 0..3 (including 0, excluding 3)\n");
#else
    printf("4 is not in range 0..3 (including 0, excluding 3)\n");
#endif
    
    int arr[3][3]={1,2,3,
                   4,5,6,
                   7,8,9};
    olli::print_int_2d_array(arr);
    printf("Macro shows that arr[2][2] is %d\n",GET_ARR_EL(arr,2,2));
    std::cout << "Enter arr[2][2]: ";
    std::cin >> arr[2][2];
    printf("Macro shows that arr[2][2] is %d\n",GET_ARR_EL(arr,2,2));
    olli::print_int_2d_array(arr);
    printf("And for dynamically allocated with 'new' array:\n");
    auto arr2 = new int[3][3];
    for(int i=0;i<3;i++) {
        for(int j=0;j<3;j++) {
            arr2[i][j]=i+j;
            printf("%d ",arr2[i][j]);
        }
	printf("\n");
    }
    printf("Macro shows that arr2[2][2] is %d\n",GET_ARR_EL(arr2,2,2));
    printf("Macro tells that number of elements in arr[3][3] is %ld .\n", GET_ARR_SIZE(arr,int));
    return 0;
}
