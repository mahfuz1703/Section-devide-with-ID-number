#include <stdio.h>

int main(){
    int x;

    while(1){
        printf("Enter Your ID Number:");
        scanf("%d", &x);

        if(x>0 && x<=25){
            printf("Your Section is 1\n");
        }
        else if(x>25 && x<=50){
            printf("Your Section is 2\n");
        }
        else if(x>50 && x<=75){
            printf("Your Section is 3\n");
        }
        else if(x>75 && x<=100){
            printf("Your Section is 4\n");
        }
        else{
            printf("You Entered Wrong ID Number\n");
        }
    }

    return 0;
}
