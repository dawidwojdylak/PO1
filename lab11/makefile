EXEC = atest
ALLSRC = *.cpp
CXXFLAGS = -std=c++17 -Wall -g --pedantic

$(EXEC): $(ALLSRC)
	$(CXX) $(CXXFLAGS) $^ -o $@

clean:
	rm -f $(EXEC) *.o