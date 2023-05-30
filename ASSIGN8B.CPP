#include<stdio.h>
#include<conio.h>
int main()
{
clrscr();
int a[20][20],b[20][20],i,j,m,n,sum=0;
printf("no of rows and columns : ");
scanf("%d%d",&m,&n);
for(i=0;i<m;i++){for(j=0;j<n;j++){
		printf("Element (%d,%d) : ",i,j);
		scanf("%d",&a[i][j]); }}
for(i=0;i<m;i++){
	for(j=0;j<n;j++){
	if(a[i][j]==a[j][i]){ sum+=1; } } }
if(sum==(m*n)) { printf("Symmetric");}
else {printf("Not symmetric ");}

getch();
return 0;
}
