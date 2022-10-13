#include <graphics.h>
#include <math.h>
#include <conio.h>

#define PI 3.1415926535


void initgr(void)
{
int gd = DETECT, gm = 0;
registerbgidriver(EGAVGA_driver);
initgraph(&gd, &gm, "");
}

void main(void)
{
double a = 0,b;
int x0 = 340,y0=240,radius = 100,i,x,y;
initgr(); /* 驱动图形模式 */
setcolor(2); /* 设置前景色为绿色 */
setlinestyle(0,0,0); /* 设置股线的类型与宽度 */
for(i=0;i<6;i++,a+=60)
{
b=a*PI/180; /* 把度数转化为弧度 */
x=x0+radius*cos(b);
y=y0+radius*sin(b);

arc(x,y,120-i*60,240-i*60,radius); /* 绘制弧线 */
}
getch(); /* 暂停屏幕查看结果 */
closegraph(); /* 关闭图形模式 */
}