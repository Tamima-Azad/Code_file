#include <stdio.h>

typedef long long ll;

int main(){
    
    // User Input Variables
    double vt, Fs, poles, alterations, P;
    //Taking Inputs
    printf("Terminal Voltage,(Vt) : ");
    scanf("%lf", &vt);

    printf("Frequency,(fs) : ");
    scanf("%lf", &Fs);

    printf("Number of Poles,(p) : ");
    scanf("%lf", &poles);

    printf("Alterations Per Minute : ");
    scanf("%lf", &alterations);

    printf("Input Power,(Pin) : ");
    scanf("%lf", &P);


    // 1) Calculate the SLip
    double Fr = alterations / 60;
    double slip = (Fr/Fs);
    printf("Slip : %.3lf%%\n", slip*100);


    // 2) Determine the Rotor Speed
    double Ns = (120 * Fs)/poles;
    double Nr = (1-slip) * Ns;
    printf("Rotor Speed : %lf\n", Nr);

    // 3) Calculate the rotor copper losses per Phase
    double powerInputPerPhase = P/3; //for 3 phases
    double copperLossesPerPhase = slip * powerInputPerPhase;
    printf("Copper Losses Per Phase : %.2lf KW\n", copperLossesPerPhase);

return 0;
}