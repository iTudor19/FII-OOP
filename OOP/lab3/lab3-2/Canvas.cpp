#include "Canvas.h"
#include <iostream>

Canvas::Canvas(int width,int height)
{
    setwidth=width;
    setheight=height;
}
void Canvas::DrawCircle(int x, int y, int ray, char ch)
{
    for(int i=y; i<=ray;i++)
    for(int j=x;j<=ray;j++)
    {
        if ((i - x) * (i - x) + (j - y) * (j - y) >= ray * (ray - 1) && (i - x) * (i - x) + (j - y) * (j - y) <= ray * (ray + 1))
            a[i][j]=ch;
    }
}
void Canvas::FillCircle(int x, int y, int ray, char ch)
{
    for(int i=y; i<=ray;i++)
    for(int j=x;j<=ray;j++)
        if((j-x)*(j-x)+(i-y)*(i-y)<=ray*ray)
            a[i][j]=ch;
    
}
void Canvas::DrawRect(int left, int top, int right, int bottom, char ch)
{
for(int i=left;i<=right;i++)
for(int j=top;j<=bottom;j++)
        if(i==left||i==right||j==top||j==bottom)
        a[i][j]=ch;
}

void Canvas::FillRect(int left, int top, int right, int bottom, char ch)
{
for(int i=left;i<=right;i++)
for(int j=top;j<=bottom;j++)
        a[i][j]=ch;
}

void Canvas::SetPoint(int x, int y, char ch)
{
a[x][y]=ch;
}

void Canvas::DrawLine(int x1, int y1, int x2, int y2, char ch)
{
    if(x1<0 || x1>=setwidth || y1<0 || y1>=setheight || x2<0 || x2>=setwidth || y2<0 || y2>=setheight)
        return;
    int dx = x2-x1;
    int dy = y2-y1;
    int x = x1;
    int y = y1;
    int d = 2*dy-dx;
    int dE = 2*dy;
    int dNE = 2*(dy-dx);
    SetPoint(x,y,ch);
    while(x<x2){
        if(d<0){
            x++;
            d+=dE;
        }
        else{
            x++;
            y++;
            d+=dNE;
        }
        SetPoint(x,y,ch);
    }
}

void Canvas::Print()
{
    for(int i=1;i<=setwidth;i++)
    for(int j=1;j<=setheight;j++)
     std::cout<<a[i][j]<<" ";
     std::cout<<" /n";
}

void Canvas::Clear()
{
    for(int i=1;i<=setwidth;i++)
    for(int j=1;j<=setheight;j++)
    a[i][j]=' ';
}

