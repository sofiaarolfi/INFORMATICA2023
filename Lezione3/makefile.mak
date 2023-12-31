all: prog1 prog2 prog3 prog4 prog5

prog1: esercizio1.cpp
    g++ -o prog1 esercizio1.cpp
prog2: esercizio2.cpp
	g++ -o prog2 esercizio2.cpp
prog3: esercizio3.cpp
	g++ -o prog3 esercizio3.cpp
prog4: esercizio4.cpp
	g++ -o prog4 esercizio4.cpp
prog5: esercizio5.cc
	g++ -o prog5 esercizio5.cpp