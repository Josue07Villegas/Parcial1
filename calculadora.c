#include <stdio.h>

void suma();
float resta(float,float);
void multiplicacion();
float division(float,float);
int main(){
float n1,n2;
suma();
printf("\n");
printf("dame un numero:\n");scanf("%f",&n1);
printf("dame otro numero: \n"); scanf("%f",&n2);
printf("la resta es: %f", n1-n2);
return 0;
}
void suma(){
int a,b;
printf("dame un numero:\n");scanf("%d",&a);
printf("dame otro numero: \n"); scanf("%d",&a);
printf("la suma es: %d", a+b);}
float resta(float a,float b){
float r;
r=a-b;
return r;}
