int main()
{
    int a,b,i,j,flag=0;
    scanf("%d%d",&a,&b);
    for(j=a;j<b;j++)
    {
    for(i=2;i<j;i++)
    {
        if(j%i!=0)
        {
            flag=0;
        }
        else
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("%d\n",i);
    }
}
    return 0;
}
