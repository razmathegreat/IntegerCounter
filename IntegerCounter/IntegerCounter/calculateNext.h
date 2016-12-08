/*Calculation will be the location where we pull all of the algorithms 
in order to use one combined test method in our source file */
#include <string>
#include <vector>
#include "Algorithms\singleIncrement.h"
#include "Algorithms\alternating.h"
#include "Algorithms\geometric.h"
#include "Algorithms\Fibonacci.h"
#include "Algorithms\squareIncrement.h"
#include "Algorithms\cubeIncrement.h"
#include "Algorithms\polynomial.h"
#pragma once

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
		next = singeIncrementAnswer(sequence);
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
	//test geometric
	if (geometricTest(sequence)){
		next = geometricanswer(sequence);
	}
	//test first degree polynomial
	if (degreeone(sequence)){
		next = degreeoneanswer(sequence);
	}
	//test second degree polynomial
	if (degreetwo(sequence)){
		next = degreetwoanswer(sequence);
	}
	//test third degree polynomial
	if (degreethree(sequence)){
		next = degreethreeanswer(sequence);
	}
	return next;
};