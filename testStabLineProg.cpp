#include "readPoints.cpp"
#include "printLineByCords.cpp"
#include "stabbedLines.cpp"
#include <fstream>

using namespace std;
Point pointsArray[8];
int main(){
    int NumPoints = 8;
    int NumOfStbLines;
    Line LinesArray[5];
    Line stabbedLines[8];
    int lns = 5;

    ifstream inPutPointFile("point.txt");
    readPoints(inPutPointFile, pointsArray, 8m NumPoints);
    printLineByCoords(4, LinesArray, 5, pointsArray, 8);
    getStabbedLines(4, LinesArray, 5, 5, pointsArray, 8, stabbedLines, 8, NumOfStbLines);

    return 0;
}
