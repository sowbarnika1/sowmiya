int main()
{
   int number,k,rem,palindrom=0;
    scanf("%d",&number);
    if(number<=1000)
    {
    k=number;
while(number)
{
   rem=number%10;
   palindrom=palindrom*10+rem;
    number=number/10;
}
if(k==palindrom)
{
    printf("yes");
}
else
{
    printf("no");
}
}
else
{
printf("invalid");
}
    
    return 0;
}
