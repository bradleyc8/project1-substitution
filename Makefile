all: PrintingAFile.exe

PrintingAFile.exe: PrintingAFile.o
	g++ -o PrintingAFile.exe PrintingAFile.o

PrintingAFile.o: PrintingAFile.cpp
	g++ -c PrintingAFile.cpp

cleanwin:
	del *.o
	del *.exe
