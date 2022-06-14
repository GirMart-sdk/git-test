#include<studio.h>
#include<conio.h>
main(){
 int a,b, d;
 printf("Digite el tamano de la matriz. (Filas y columnas):\n ");
 scanf("%d%d",&a,&b);
int m[a][b],n,i,j;
for(i=1;i<=a;i++){
for(j=1;j<=b;j++){
printf("Digite numero en posicion %d %d: ",i,j);
scanf("%d",&m[i][j]);
}
}
for(i=1;i<=a;i++){
 printf("\n");
for(j=1;j<=b;j++){
printf("%d\t",m[i][j]);}}
getch();
return 0;} 