all: plotImage

FLAGS = -g
LIBS = `pkg-config --libs opencv`
CPPVERSION = --std=c++11

clean:
	rm -f plotImage
	rm -f *.o

plotter.o: plotter.cpp
	g++ $< -o $@ -c $(CPPVERSION) $(LIBS)

plotImage: plotImage.cpp plotter.o
	g++ $< -o $@ plotter.o $(CPPVERSION) $(FLAGS) $(LIBS)

