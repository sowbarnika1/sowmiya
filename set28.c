int main()
{
int a,rem,ams=0,temp,k=0,mul=1,i,j,b;
scanf("%d%d",&a,&b);
for(i=a;i<b;i++)
{
temp=i;
k=0;
while(temp>0)
{
temp=temp/10;
k++;
}
temp=i;
ams=0;
while(temp)
{
rem=temp%10;
mul=1;
for(j=1;j<=k;j++)
{
    mul=mul*rem;
}
ams=ams+mul;
temp=temp/10;
}
if(ams==i)
{
printf("%d\n",ams);
}
}
return 0;
}
