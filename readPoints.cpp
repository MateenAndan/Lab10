#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <fstream>
#define MAXARRAYSIZE 500
using namespace std;
typedef int PointId;
typedef int LineId;


struct Point{
    int x;
    int y;
    PointId Pid;
};

struct Line{
    LineId Pid;
    PointId pnt1;
    PointId pnt2;
};

void readPoints(ifstream & inPutPointFile, Point pointsArray[], const int MaxPntsSize, int & numPoints)
{
    ifstream inPutPointFile("point.txt");
    if(!inPutPointFile.is_open()) {
        exit(EXIT_FAILURE);
    }
    
    int x;
    int y;
    int count;
    int counter;
    PointId pid;
    pointsArray[MaxPntsSize];

    while(inPutPointFile >> pid >> x >> y){
        Point count;
        int count = 0;
        count.x = x;
        count.y = y;
        count.Pid = pid;
        cout << count.Pid << endl;
        pointsArray[counter] = count;
        ++counter;
    }
    cout << "PointID" << " " << "x:" << " " << "y:" << endl;
    for (int i = 0; i < 8; ++i)
    {

        cout << pointsArray[i].Pid << " " << pointsArray[i].x << " " << pointsArray[i].y << endl;
    }
    
};

