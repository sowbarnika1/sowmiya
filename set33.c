int main()
{
    int n,a[100],min;
    scanf("%d",&n);
    if(n>=1 && n<=100000)
    {
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
        min=a[0];
        for(int i=0;i<n;i++)
        {
            if(a[i]<min)
            {
                min=a[i];
            }
            
        }
            printf("%d",min);
    }
    return 0;
}
