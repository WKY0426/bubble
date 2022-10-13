#include <stdio.h>
int main()
{
 int A [10];
 int B;
 for(int n;n<10;n++)
 {
 printf("input:");
 scanf("%d",&A[n]);
 printf("\n");
}

 
 
 for(int k=0;k<9;k++){
 
 
 for(int i=0;i<10;i++){
 	if (A[i]>A[i+1]){
 		B=A[i+1];
 		A[i+1]=A[i];
 		A[i]=B;
 		
 		
	 }

}


}
for(int l=0;l<10;l++){

printf("%d ",A[l]);}
printf("\n");
printf("STAR NB");
 
 return 0;
}