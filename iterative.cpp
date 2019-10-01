#include<bits/stdc++.h>
using namespace std;
#define MAX_ITER 1000000


double func(double x)
{
    return .5*x*x + .25;
}

void iterative(double a)
{
    double c = 0;
    for(int i=0;i<=100;i++){

    double x = func(a);
    double y = func(x);
    printf("%lf \n",x);
    if(y>x){
        printf("divergence no solution ");
        break;
    }
    else if(x==y){
         c = y;
         cout << "The value of root is : " << c;
         break;
    }
    else
        a=x;
    }

}


int main()
{

    double a;
    printf("the starting value for iteration : ");
    scanf("%lf",&a);
    iterative(a);
    return 0;
}

