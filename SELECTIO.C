 #include<stdio.h>
 #include<conio.h>
 void main(){
	int j , i , smallest , temp , a[100] , n;
	clrscr();
	printf("enter the size of array : ");
	scanf("%d",&n);
	printf(" enter the array element : ");
	for(i=0 ; i<n ; i++){
	scanf("%d ",&a[i]);
	}
	for(i=0 ; i<n-1 ; i++){
	smallest = i;
	for(j = i+1 ; j<n ; j++){
	if(a[smallest] > a[j]){
	smallest = j;
	}
	}
	if(smallest != i){
	temp = a[i];
	a[i] = a[smallest];
	a[smallest] = temp;
	}
	}
	printf("by selection sorted array is : ");
	for(i=0 ; i<n ; i++){
	printf("%d ",a[i]);
	}
	getch();
	}