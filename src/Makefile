IDIR = ../include
CXX = g++
CXXFLAGS = -O2 -I $(IDIR)

ODIR = obj

_OBJ = bubble.o insert.o main.o merge.o mocker.o quick.o select.o shell.o tester.o
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))

sort: $(OBJ)
	$(CXX) -o $@ $^ $(CXXFLAGS)

$(ODIR):
	mkdir $@

$(ODIR)/main.o: main.cpp | $(ODIR)
	$(CXX) -c -o $@ $< $(CXXFLAGS)

$(ODIR)/%.o: %.cpp $(IDIR)/%.h | $(ODIR)
	$(CXX) -c -o $@ $< $(CXXFLAGS)

clean:
	rm -rf $(ODIR)

