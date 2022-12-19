
#ifndef RADIX_HPP
#define RADIX_HPP
#include"Queue.hpp"
#include"Tissue.hpp"
#include <cmath>

class Radix{
	private:	
		int* numbers;
		int length;
		Queue **queues;
		int maxStep;
		
		int MaxStepNumber();
		int power(int);
		int StepCount(int);
		int* QueueCurrentLengths();
	public:
		Radix(Tissue*);
		int Sort();
		~Radix();
};





#endif