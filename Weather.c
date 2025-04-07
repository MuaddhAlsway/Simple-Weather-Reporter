#include <stdio.h>
#include <string.h>

int main(){
    const char* day = "Saturday";
    
    if (strcmp(day, "Saturday") == 0){
        printf("The weather is hot\n");
    } else if (strcmp(day, "Monday")== 0){
        printf("The weather is Cloudy\n");
    } else if (strcmp(day, "Tuesday")== 0){
        printf("The weather is Rainy\n");
}
    return 0;
}