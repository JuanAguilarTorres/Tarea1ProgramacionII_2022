FLAGS = -g -c --std=c++17

all:
	mkdir -p bin
	g++ $(FLAGS) src/main.cpp -o bin/main.o
	g++ $(FLAGS) src/envio.cpp -o bin/envio.o
	g++ $(FLAGS) src/envioServicioPostal.cpp -o bin/envioServicioPostal.o
	g++ $(FLAGS) src/envioFedEX.cpp -o bin/envioFedEX.o
	g++ -g -o bin/envio.o bin/envioServicioPostal.o bin/envioFedEX.o bin/main.o

test:
	mkdir -p bin
	g++ $(FLAGS) tests/test_envioFedEX.cpp -o bin/test_envioFedEX.o
	g++ $(FLAGS) tests/test_servicioPostal_Primera.cpp -o bin/test_servicioPostal_Primera.o
	g++ $(FLAGS) tests/test_servicioPostal_Segunda.cpp -o bin/test_servicioPostal_Segunda.o
	g++ $(FLAGS) tests/test_servicioPostal_Tercera.cpp -o bin/test_servicioPostal_Tercera.o
	g++ $(FLAGS) src/envio.cpp -o bin/envio.o
	g++ $(FLAGS) src/envioServicioPostal.cpp -o bin/envioServicioPostal.o
	g++ $(FLAGS) src/envioFedEX.cpp -o bin/envioFedEX.o
	g++ -g -o bin/tests bin/test_envioFedEX.o bin/test_servicioPostal_Primera.o bin/test_servicioPostal_Segunda.o bin/test_servicioPostal_Tercera.o bin/envio.o bin/envioServicioPostal.o bin/envioFedEX.o -lgtest -lgtest_main -lpthread


clean:
	rm -Rf bin
