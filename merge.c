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
printf("merged array:");
for(i=0;i<n+n;i++)
{
printf("%d",c[i]);
}
}
