//dana drakulich, cs 202-2010, 5/30/25

analyzer: driver.o word_analyzer.o
	g++ -o analyzer driver.o word_analyzer.o

driver.o: driver.cpp word_analyzer.h
	g++ -c driver.cpp

word_analyzer.o: word_analyzer.cpp word_analyzer.h
	g++ -c word_analyzer.cpp

clean:
	rm *.0
