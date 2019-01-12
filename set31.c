int main()
{
    long int n,a[100],max;
    scanf("%ld",&n);
    if(n>=1 && n<=100000)
    {
    for(int i=0;i<n;i++)
    {
        scanf("%ld",&a[i]);
    }
        max=a[0];
        for(int i=0;i<n;i++)
        {
            if(a[i]>max)
            {
                max=a[i];
            }
            
        }
            printf("%ld",max);
    }
        return 0;
}
