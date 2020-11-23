

#include<iostream>
#include<cmath>
using namespace std;
int main(void)
{
	double vector[] = { 1., 2., 3., 4., 5. };

	int n = sizeof(vector) / sizeof(vector[0]);

	double ArithmeticMean=0;
	double HarmonicMean=0;
	double GeometricMean=1;
	double RootMeanSquare=1;

	////////////////////////////////
	for (int i = 0; i < n; i++)
	{
		ArithmeticMean = ArithmeticMean + vector[i];

		HarmonicMean = HarmonicMean + (1 / vector[i]);

		GeometricMean = GeometricMean * vector[i];

		RootMeanSquare = RootMeanSquare + pow(vector[i], 2);
	}

	ArithmeticMean = ArithmeticMean / n;

	HarmonicMean = n / HarmonicMean;

	double n1 = 1 / n;

	GeometricMean = pow(GeometricMean, n1);
		
	RootMeanSquare = RootMeanSquare / n;
	
	RootMeanSquare = sqrt(RootMeanSquare);

	cout << "Arithmetic Mean = " << ArithmeticMean << endl;

	cout << "Harmonic Mean   = " << HarmonicMean   << endl;

	cout << "Geometric Mean  = " << GeometricMean  << endl;

	cout << "RootMean Square = " << RootMeanSquare << endl;

	cout << endl;

	return 0;
}


