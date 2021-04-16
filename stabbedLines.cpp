#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <fstream>

#define MAXARRAYSIZE 500

using namespace std;

typedef int PointId;

typedef int LineId;

struct Point
{               
    PointId Pid; 
    int x;     
    int y;       
};

struct Line{
    LineId Lid;
    PointId pnt1;
    PointId pnt2;
};

void getStabbedLines (const int xcoord, Line linesArray[], const int MaxLnsSize, const int NumLines, Point pointsArray[],
                       const int MaxPtsSize, Line stabbedLines[], const int MaxStbSize, int& NumOfStbLines)
{
    
    struct stabbedLine{
        LineId Lid;
        Point pnt1;
        Point pnt2;                          
   }

   
   int counter;
   Line arr[10];
   Line line;
   for (int i = 0; i < 5; ++i)
    {
        int counter = 0;
        line.Lid = counter;

        if (line.Lid == linesArray[i].Lid)
        {
            line.pnt1.Pid = linesArray[i].p1;
            line.pnt2.Pid = linesArray[i].p2;
        }

        arr[counter] = line;
        ++counter;
        cout << endl;
    }

    for (int i = 0; i < NumLines; ++i)
    {
        for (int j = 0; j < MaxPtsSize; ++j)
        {
            if (arr[i].pnt1.Pid == pointsArray[j].Pid)
            {
                arr[i].pnt1.x = pointsArray[j].x;
                arr[i].ptn1.y = pointsArray[j].y;
            }
            if (arr[i].pnt2.Pid == pointsArray[j].Pid)
            {
                arr[i].pnt2.x = pointsArray[j].x;
                arr[i].pnt2.y = pointsArray[j].y;
            }
        }
        cout << "LineID" << " " << endl;
        cout << StabbedLines[y].Lid << endl;
        cout << endl;
        cout  << "First Point: "  << endl;
        cout << "(" << arr[i].pnt1.x << "," << arr[i].pnt1.y << ")" << endl;
        cout << endl;
        cout << "(Second Point: )" << endl;
        cout << "(" << arr[i].pnt2.x << "," << arr[i].pnt2.y << ")" << endl;
    }
    
    cout << "Number of stabbed lines: " << " " << xcoord << endl;

    for (int i = 0; i < NumLines; ++i)
    {
        if (arr[i].pnt1.x >= xcoord || arr[i].pnt2.x >= xcoord)
        {
            cout << "Line" << "   " << arr[i].Lid << endl;
        }
    }
};
   

