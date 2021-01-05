#include <stdio.h>
#include <conio.h>
#include <string.h>

main(){
    int num[2][3][4], i, j, k, count = 0;
    
    for(i = 0; i < 2; ++i){
        for(j = 0; j < 3; ++j){
            for(k = 0; k < 4; ++k){
                ++count;
                num[i][j][k] = count;
                printf("num[%d][%d][%d] = %d\t", i, j, k, num[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
    printf("Array num[2][3][4] can keep %d values", count);
}
