#include <stdio.h>

int main()
{
    double x1,y1,x2,y2,x3,y3,x4,y4,x,y,xs,ys;
    while(scanf("%lf %lf %lf %lf %lf %lf %lf %lf",&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4)!= EOF){
        if(x1==x3 && y1==y3){
            xs = x1;
            ys = y1;
            x = ( x2 + x4 ) - xs;
            y = ( y2 + y4 ) - ys;
            printf("%.3lf %.3lf\n",x,y);
        }
        else if(x1==x4 && y1==y4){
            xs = x1;
            ys = y1;
            x = ( x2 + x3 ) - xs;
            y = ( y2 + y3 ) - ys;
            printf("%.3lf %.3lf\n",x,y);
        }
        else if(x2==x3 && y2==y3){
            xs = x2;
            ys = y2;
            x = ( x1 + x4 ) - xs;
            y = ( y1 + y4 ) - ys;
            printf("%.3lf %.3lf\n",x,y);
        }
        else if(x2==x4 && y2==y4){
            xs = x2;
            ys = y2;
            x = ( x1 + x3 ) - xs;
            y = ( y1 + y3 ) - ys;
            printf("%.3lf %.3lf\n",x,y);
        }

}
    return 0;
}
