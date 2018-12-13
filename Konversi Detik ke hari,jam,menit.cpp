#include<stdio.h>
#include<conio.h>
int main()
{
int s,v,t;
printf("Masukkan kecepatan (v) : ");scanf("%i",&v);
printf("Masukkan waktu dalam sekon (t) : ");scanf("%i",&t);
s=v*t;
printf("S = %i * %i = %i meter",v,t,s);
getch();
}
