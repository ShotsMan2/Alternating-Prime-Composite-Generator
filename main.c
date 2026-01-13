#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
        int sayi,i,n,sum,asal,j;

    printf("n i girin");
    scanf("%d",&n);

    sum=2;

    srand(time(NULL));

    for(i=0;i<n;i++){
        for(;;){
            sayi=rand()%100+1;

            if(sum%2==0){
                asal=1;
                if(sayi==1){
                    asal=0;
                }
                for(j=2;j<sayi;j++){
                    if(sayi%j==0){
                        asal=0;
                        break;
                    }
                }
                if(asal==1){
                    printf("%d ",sayi);
                    sum++;
                    break;
                }


            }
            else{
                asal=1;
                for(j=2;j<sayi;j++){
                    if(sayi%j==0){
                        asal=0;
                        break;
                    }
                }
                if(asal==0){
                    printf("%d ",sayi);
                    sum++;
                    break;
                }

            }
        }
    }
}
