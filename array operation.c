#include<stdio.h>
int main()
{
	int n=0;
	int a[n],i,j,ch,ele,ind;
	printf("\nenter the no of elements : ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("\nenter the num %d : ",i+1);
		scanf("%d",&a[i]);
	}
	while(ch!=4){
	printf("\n1. insert \n2. delete \n3. display \n4. exit \nenter your choice : ");
	scanf ("%d",&ch);
	if(ch==1)
	{
		printf("\nenter the element to be added : ");
		scanf("%d",&ele);
		a[n]=ele;
		printf("\nsuccessfully added");
		n++;
	}
	else if(ch==2)
	{
		printf("\nenter the element to be delete : ");
		scanf("%d",&ele);
		for(i=0;i<n;i++){
			if(a[i]==ele)
			ind=i;
		}
		for(i=ind;i<n;i++){
			if(i<n-1)
			a[i]=a[i+1];
			else
			a[i]=0;
		}
		
	}
	else if(ch==3){
		printf("\n elements : ");
		for(i=0;i<n;i++){
			printf("%d ",a[i]);
		}
	}
    }
}
