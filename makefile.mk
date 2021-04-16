program: printLineByCoords.o readPoints.o stabbedLines.o testStabLineProg.o
	g++ printLineByCoords.o readPoints.o stabbedLines.o testStabLineProg.o -o program

printLineByCoords.o: printLineByCoords.cpp
	g++ -c printLineByCoords.cpp

readPoints.o: readPoints.cpp
	g++ -c readPoints.cpp

stabbedLines.o: stabbedLines.cpp
	g++ -c stabbedLines.cpp

testStabLineProg.o: testStabLineProg.cpp
	g++ -c testStabLineProg.cpp

clean:
	rm *.o program