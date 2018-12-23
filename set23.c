int main()
{
    int number,i,flag=0;
    scanf("%d",&number);
    if(number<=1000)
    {
    for(i=2;i<number;i++)
    {
        if(number%i!=0)
        {
            flag=0;
        }
        else
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        printf("no");
    }
else
{
    printf("yes");
}
}
else
{
    printf("invalid");
}
    return 0;
}
