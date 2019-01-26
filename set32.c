int main()
{
    int a, d, n, i, t;
     int sum = 0,s=0;
     scanf("%d", &n);
     scanf("%d", &a);
     scanf("%d", &d);
     sum = (n * (2 * a + (n - 1)* d ))/ 2;
     t= a + (n - 1) * d;
     for (i = a; i <= t; i = i + d )
     {
          s=s+i;
    }
    printf("sum=%d",s);
    return 0;
}
