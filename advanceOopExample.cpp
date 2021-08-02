#include <iostream>
#include <stdio.h>
#include <cstring>
#include <conio.h>
#include <math.h>
#include <time.h>
#include <bits/stdc++.h>
#include "msoftcon.cpp"
#include <msoftcon/msoftcon.h>
using namespace std;
/*----------------------------------Function Declaration------------------------------------*/

/*--------------------------------Function Definations------------------------------------*/

class Shape
{
protected:
    int xCo, yCo, radiusOrHight;
    color fillColor;
    fstyle fillStyle;

public:
    void set(int x, int y, int r, color fc, fstyle fs)
    {
        xCo = x;
        yCo = y;
        radiusOrHight = r;
        fillColor = fc;
        fillStyle = fs;
    }

protected:
    void draw()
    {
        set_color(fillColor);
        set_fill_style(fillStyle);
    }
};

class Circle : public Shape
{
public:
    void draw()
    {
        Shape::draw();
        draw_circle(xCo, yCo, radiusOrHight);
    }
};

class Triangle : public Shape
{
public:
    void draw()
    {
        Shape::draw();
        draw_pyramid(xCo, yCo, radiusOrHight);
    }
};

class Line : public Shape
{
public:
    void draw()
    {
        Shape::draw();
        draw_line(xCo, yCo, radiusOrHight, 15);
        // draw_line(end x, end y, start x, start y);
        // draw_rectangle(xCo, 10, 20, yCo);
    }
};

int main()
{
    init_graphics();

    Circle c1;
    Triangle t1;
    Line l1;

    c1.set(15, 7, 5, cBLUE, X_FILL);
    t1.set(41, 12, 7, cRED, O_FILL);
    l1.set(80, 20, 60, cGREEN, MEDIUM_FILL);

    c1.draw();
    t1.draw();
    l1.draw();

    set_cursor_pos(1, 25);

    getch();
    return 0;
}
