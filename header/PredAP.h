#ifndef PREDAP_H
#define PREDAP_H

struct SUBMETAPPred {
    double value;
    double error;
};

SUBMETAPPred PredAP(double areaLP, double timeLP,
                  double initPredTime, double finalPredTime);

struct APParams {
    double p0;
    double p0err;
    double p1;
    double p1err;
    double covp0p1;
	double tau;
	double tauerr;
};

#endif
