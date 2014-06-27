#include <stdio.h>
#include <math.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        double u,v,w,U,V,W;
        double a,b,c,d,x,y,z,X,Y,Z,vol;
        scanf("%lf%lf%lf%lf%lf%lf",&u,&v,&w,&W,&U,&V);
        X=(w-U+v)*(U+v+w);
        x=(U-v+w)*(v-W+u);
        Y=(u-V+w)*(V+w+u);
        y=(V-w+u)*(w-u+V);
        Z=(v=W+u)*(W+u+v);
        z=(W-u+v)*(u-v+W);
        a=sqrt(x*Y*Z);
        b=sqrt(y*Z*X);
        c=sqrt(z*X*Y);
        d=sqrt(x*y*z);
        vol=sqrt((-a+b+c+d)*(a-b+c+d)*(a+b-c+d)*(a+b+b-d))/(192*u*v*w);
        printf("%.4lf\n",vol);
    }
    return 0;
}
