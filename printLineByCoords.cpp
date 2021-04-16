#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <fstream>

using namespace std;

typedef int PointId;

typedef int LineId;

struct Point
{               
    PointId Pid; 
    int x;     
    int y;       
};

struct Line
{              
    LineId Lid; 
    PointId pnt1; 
    PointId pnt2;
};

void printLineByCoords(LineId lid, Line LinesArray[], const int MaxLnsSize, Point pointsArray[], const int MaxPntsSize)
{
    cout << "LineID"
         << " "
         << "FirstPoint"
         << " "
         << "SecondPoint" 
         << endl;
    for (int i = 0; i < MaxLnsSize; ++i)
    {

        cout << LinesArray[i].Lid << " " << LinesArray[i].pnt1 << " " << LinesArray[i].pnt2 << endl;
    }
    Line counter;
    Point pnt1;
    Point pnt2;
    counter.Lid = lid;
    for (int i = 0; i < 5; ++i)
    {

        if (counter.Lid == LinesArray[i].Lid)
        {
            pnt1.Pid = LinesArray[i].pnt1;
        }
        if (counter.Lid == LinesArray[i].Lid)
        {
            pnt2.Pid = LinesArray[i].pnt2;
        }
    }
    for (int i = 0; i < 8; ++i)
    {
        if (pnt1.Pid == pointsArray[i].Pid)
        {
            pnt1.x = pointsArray[i].x;
            pnt1.y = pointsArray[i].y;
        }
        if (pnt2.Pid == pointsArray[i].Pid)
        {
            pnt2.x = pointsArray[i].x;
            pnt2.y = pointsArray[i].y;
        }
    }

    cout << "LineID" << " " << endl;
    cout << counter.Lid << endl;
    cout << endl;
    cout << "Point one: " << endl;
    cout << "(" << pnt1.x << "," << pnt1.y << ")" << endl; cout << endl;
    cout <<  "Point two: " << endl;
    cout << "(" << pnt2.x << "," << pnt2.y << ")" << endl;
}
