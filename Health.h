#pragma once
using namespace std;
class CHealth {
public:
	// constructors
	CHealth() { nCHealth++; age = 20; beat5min = temp5min = nullptr; };
	CHealth(int a);
	// destructor
	~CHealth();
	// member data
	static int nCHealth;
	float weight, height, cel, faren, beat, pressure;
	float BMIvalue, healthAge;
    float basalmetabolic;
	float* beat5min, * temp5min;
	float metaA = 66.47;
	// member functions (methods)
	void measure();
	void measure(int);
	int  run5min();  // -1 emmergency
	void GetBMI();

private:
	// private member data
	int age;
	// private member function
	void cel2faren() { faren = cel * 9.0 / 5.0 + 32.0; }
	void faren2cel();
	void Metabolic();
	void GetHealthAge() { healthAge = beat / pressure; }
};
