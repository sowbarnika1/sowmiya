int main()
{
   int number,k,power=1;
    scanf("%d",&number);
    scanf("%d",&k);
while(k>0)
{
   power=power*number;
    k--;
}
printf("%d",power);
    
    return 0;
}
