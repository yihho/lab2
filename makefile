lab2main:lab2main.o BMI.o
	g++ -o lab2main lab2main.o BMI.o

lab2main.o:lab2main.cpp BMI.h
	g++ -c lab2main.cpp

BMI.o:BMI.cpp BMI.h
	g++ -c BMI.cpp

clean:
	rm lab2main *.o
