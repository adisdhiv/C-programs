#include<stdio.h>   // code not working..check
int sort(int *arr,int n,int len);
int main()
{
	int *arr,i,n,len;
	printf("Enter the length of numbers: ");
	scanf("%d",&n);
	arr=(int *)malloc(n*sizeof(int));
	printf("Enter the numbers: ");
	for(i=0;i<n;i++){
		scanf("%d",(arr+i));
	}
	printf("The numbers are: \n");
	for(i=0;i<n;i++){
		printf("%d ",*(arr+i));
	}
	printf("\n Enter the digits upto which the sorting splits: ");
	scanf("%d",&len);
	sort(arr,n,len);
	printf("\nThe sorted numbers are: \n");
	for(i=0;i<n;i++){
		printf("%d ",*(arr+i));
	}
	return 0;
}

int sort(int *arr1,int k,int len)
{
	int i,j,temp;
	for(i=0;i<(len-1);i++)
	{
		for(j=0;j<(len-1-i);j++)
		{
			if(*(arr1+j)>*(arr1+(j+1))){
				temp=*(arr1+j);
				*(arr1+j)=*(arr1+(j+1));
				*(arr1+(j+1))=temp;
			}
		}
	}
	
	for(i=len;i<(k-1);i++)
	{
		for(j=len;j<(k-1-i);j++)
		{
			if(*(arr1+j)<*(arr1+(j+1))){
				temp=*(arr1+j);
				*(arr1+j)=*(arr1+(j+1));
				*(arr1+(j+1))=temp;
			}
		}
	}
	return 0;
}

