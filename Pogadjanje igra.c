#include <stdio.h>


int main(){

int limitpokusaja=5;
int brojacpokusaja;
int tajnibroj=5;
int pokusaj;
int bezpokusaja=0;
int preostalipokusaji=4;
printf("Pogodi broj, imate 5 pokusaja\n");

while(pokusaj != tajnibroj && bezpokusaja ==0 ){
if(brojacpokusaja < limitpokusaja){
printf("Unesi broj\n");
scanf("%d", &pokusaj);
brojacpokusaja++;
printf("Niste pogodili, imate jos %d pokusaja\n", preostalipokusaji);
preostalipokusaji--;
}
else {
        bezpokusaja=1;
        }
}
if (bezpokusaja==1){
printf("Izubili ste\n");
}
else {
        printf("Pobjedili ste\n");

}
return 0;
}
