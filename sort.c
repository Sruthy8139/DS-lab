#include<stdio.h>
int main()
{
int a[100],b[100],c[100],n,i,j,k,temp;
printf("Enter the size of first array:");
scanf("%d",&n);
printf("\nEnter elements of first array:\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n-1;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
printf("\nSorted array:\n");
for(i=0;i<n;i++)
{
printf("\t%d\t",a[i]);
}
printf("\nEnter the size of second array:\n");
scanf("%d",&n);
printf("\nEnter elements of second array\n");
for(i=0;i<n;i++)
{
scanf("%d",&b[i]);
}
for(i=0;i<n-1;i++)
{
for(j=i+1;j<n;j++)
{
if(b[i]>b[j])
{
temp=b[i];
b[i]=b[j];
b[j]=temp;
}
}
}
printf("Sorted array:\n");
for(i=0;i<n;i++)
{
printf("\t%d\t",b[i]);
}
for(i=0;i<n;i++)
{
c[i]=a[i];
}
k=n;
for(i=0;i<n;i++)
{
c[k]=b[i];
k++;
}
for(i=0;i<k-1;i++)
{
for(j=i+1;j<k;j++)
{
if(c[i]>c[j])
{
temp=c[i];
c[i]=c[j];
c[j]=temp;
}
}
}
printf("\nMerged elements of sorted array:\n");
for(i=0;i<k;i++)
{
printf("\t%d\t",c[i]);
}
}

