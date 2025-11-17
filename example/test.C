#include "../source/PredAP.C"
#include "../header/PredAP.h"

void test () {

	int module = 10;
	double areaLP = 50000;
	double timeLP = 550;
	double initPredTime = 1500;
	double finalPredTime = 1700;
	
	SUBMETAPPred r = PredAP(module, areaLP, timeLP, initPredTime, finalPredTime);

	cout << "Prediction value: " << r.value << endl;
	cout << "Prediction error: " << r.error << endl;
}

