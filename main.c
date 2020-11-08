#include<stdio.h>
int main(){
    int x,y,data,size,i,z;
    printf("How many sets of test data: ");scanf("%d",&data);
    for (i = 0 ; i < data ; i++){
        printf("\nSize: ");scanf("%d",&size);
        for (x = 0 ; x < size ; x++){
            for (y = 0 ; y < size ; y++){
                z = (size + 1)/2;
                if(( (x+y)>=(size-z) )&&( (x-y)<=(z-1) )&&( (y-x)<=(z-1) )&&( (x+y)<=(size+z-2) )){
                    printf("$");
                }
                if(( (x+y)<(size-z) )||( (x-y)>(z-1) )||( (y-x)>(z-1) )||( (x+y)>(size+z-2) )){
                    printf("+");
                }
            }
            printf("\n");
        }
    }

return 0;
}
