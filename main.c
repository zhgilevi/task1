#include <stdio.h>
#include <stdlib.h>
#include <math.h>



void task1(){

double x1,x2,x3,y1,y2,y3;
printf("vvedite koordinati tochek treugolnika\n");
scanf("%lf%lf%lf%lf%lf%lf",&x1,&y1,&x2,&y2,&x3,&y3);
double p=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2))+sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3))+sqrt((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3));
double s=fabs((x1-x3)*(y2-y3)-(y1-y3)*(x2-x3))/2;

printf("perimetr: %lf\n ploshad: %lf\n",p,s);

}


void task2(){
int n;
printf("vvedite trechznachnoe chislo\n");
scanf("%d",&n);
printf("pervaya cifra v konec %d\n",n%100*10+n/100);


}
void task3(){
    int n;
    printf("vvedite kolichestvo sekund\n");
    scanf("%d",&n);
    printf("proshlo s poslednego chasa %02d:%02d\n",(n%3600-n%60)/60,n%60);

}


void task4(){
printf("vvedite nomer dnya i nomer 1 yanvarya\n");
int k,n;
scanf("%d%d",&k,&n);

printf("nomer dnya: %d\n",((k-1)%7+n-1)%7+1);


}

void task5(){
printf("vvedite chisla A B C\n");
int a,b,c;
scanf("%d%d%d",&a,&b,&c);

printf("pomestitsa %d kvadratov\n", (a/c)*(b/c));

}

int main()
{
    int request;
    while(1){
        printf("vvedite nomer zadachi(1-5) 0 dlya zaversheniya\n");
        scanf("%d",&request);
        if (request==1)
            task1();
        if (request==2)
            task2();
        if (request==3)
            task3();
        if (request==4)
            task4();
        if (request==5)
            task5();
        if (request==0)
            return 0;


    }

    return 0;
}
