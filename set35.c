int main()
{
    int a[100],n,i,j,t,m,mid;
    scanf("%d",&n);
    if(n>=1 && n<=1000)
    {
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
            t=a[i];
            a[i]=a[j];
            a[j]=t;
            }
        }
        
    }
    if(n%2==0)
    {
         m=n/2;
    }
    else
    {
      m=(n+1)/2;
    }


for(i=0;i<m;i++)
{
    mid=a[i];
}
printf("midle element=%d",mid);
    
}
    return 0;
}
