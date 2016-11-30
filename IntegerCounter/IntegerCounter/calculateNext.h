/*Calculation will be the location where we pull all of the algorithms 
in order to use one combined test method in our source file */
#pragma once
#include <string>
#include <vector>
#include "Header.h"
#include "Algorithms\singleIncrement.h"
#include "Algorithms\alternating.h"
#include "Algorithms\geometric.h"
#include "Algorithms\Fibonacci.h"
#include "Algorithms\squareIncrement.h"
#include "Algorithms\cubeIncrement.h"
using namespace std;

double calculateNextInSequence(std::vector<double> sequence)
{
	//creating a key for no answer
	double next = -9999999;
	//test alternating.h
	if (alternatingFrontTest(sequence) && alternatingBackTest(sequence)) {
		next = alternatingAnswer(sequence);
	}
	//test singleIncrement.h
	if (singleIncrementFrontTest(sequence) && singleIncrementBackTest(sequence)) {
		next = singleIncrementAnswer(sequence);
	}
	//test Fibonacci.h
	if (fibonacciFrontTest(sequence) && fibonacciBackTest(sequence)) {
		next = fibonacciAnswer(sequence);
	}
	//test squareIncrement.h
	if (squareIncrementFrontTest(sequence) && squareIncrementBackTest(sequence)) {
		next = squareIncrementAnswer(sequence);
	}
	//test cubeIncrement.h
	if (cubeIncrementFrontTest(sequence) && cubeIncrementBackTest(sequence)) {
		next = cubeIncrementAnswer(sequence);
	}
	return next;
}