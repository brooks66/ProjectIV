CXX=    g++
CXXFLAGS= -g -Wall -std=gnu++11
SHELL=    bash

all: site-tester

site-tester: site-tester.cpp
	$(CXX) $(CXXFLAGS) -o $@ $^

clean:
	rm -f site-tester
