#include <stdio.h>

int lcm(int a, int b);

int main()
{
    int n1,n2,res;
    printf("Input first number: ");
    scanf("%d", &n1);
    printf("Input second number: ");
    scanf("%d",&n2);
    if(n1 > n2)
    {
        res = lcm(n2, n1);
    }
    else
    {
        res = lcm(n1, n2);
    }    
    printf("LCM of %d and %d = %d", n1, n2, res);
    return 0;
}
int lcm(int a, int b)
{
    static int multiple = 0;
    multiple += b;
    if((multiple % a == 0) && (multiple % b == 0))
    {
        return multiple;
    }
    else 
    {
        return lcm(a, b);
    }
}
