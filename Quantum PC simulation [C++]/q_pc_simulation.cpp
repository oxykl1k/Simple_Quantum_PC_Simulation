#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

class Qubit {
private:
	double alpha; // |0>
	double beta; // |1>
public:
	// Constructor
	Qubit(double a, double b) : alpha(a), beta(b) {}

	double getAlpha() const {
		return alpha;
	}

	double getBeta() const {
		return beta;
	}

	void setCoefficients(double a, double b) {
		alpha = a;
		beta = b;
	}

	// Usage of Hadamard`s Gate according to qubit
	void applyHGate() {
		double newAlpha = (alpha + beta) / sqrt(2);
		double newBeta = (alpha - beta) / sqrt(2);
		alpha = newAlpha;
		beta = newBeta;
	}
	void printState() const {
		std::cout << "Alpha: " << alpha << "\n" << "Beta: " << beta << std::endl;
	}
};

int main() {
	double alpha, beta;

	std::cout << "Input the value of alpha: ";
	cin >> alpha;
	std::cout << "Input the value of beta: ";
	cin >> beta;

	Qubit qubit(alpha, beta);
	qubit.applyHGate();

	qubit.printState();

	return 0;
}