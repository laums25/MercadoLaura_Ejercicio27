Ejer.png : Ejer.dat Ejercicio27.py
	python Ejercicio27.py


Ejer.dat  : Ejer.x
	./Ejer.x > Ejer.dat


Ejer.x : Ejercicio27.cpp
	c++ Ejercicio27.cpp -o Ejer.x
	

clean:
	rm Ejer.x Ejer.dat Ejer.png
