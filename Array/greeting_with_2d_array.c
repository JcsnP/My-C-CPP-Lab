#include <stdio.h>
#include <conio.h>
#include <string.h>

main(){
    char greeting[4][15] = {"Good Morning", "Good Afternoon", "Good Evening", "Good Night"};
    char time[6];
    
    int i, j;
    
    printf("Please insert time in format xx.xx\n");
    printf("e.g. 07.00 , 15.30 , 24.00 etc.\n");
    printf("What time is it? : ");
    
    while(time[2] != '.'){
        printf("Your time is in an wrong format , please try again\n");
        printf("What time is it? : ");
        gets(time);
    }
    
    if(strcmp(time, "12.00") < 0) i = 0;
    else if(strcmp(time, "17.00") < 0) i = 1;
    else if(strcmp(time, "21.00") < 0) i = 2;
    else i = 3;
    
    for(j = 0; j < strlen(greeting[i]); ++j){
        printf("%c", greeting[i][j]);
    }
    
    /* BETTER WAY
    printf("%s", greeting[i]);
    */
}
