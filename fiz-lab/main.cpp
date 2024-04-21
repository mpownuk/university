#include <fstream>
#include <iostream>
#include <cmath>

using namespace std;


double niepewnoscPomiaruBezposredniego(double deltaD, double deltaAn){
    return (double) 2.0*sqrt((deltaD*deltaD + deltaAn*deltaAn)/3.0);
}

double sredniaOdlegloscOdSzczeliny(double lewy, double prawy){
    return abs(lewy - prawy)/2.0;
}
double wartoscNiepewnosciUAn(double uAnL, double aUnP){
    return 0.5* sqrt(uAnL*uAnL + aUnP*aUnP);
}

double stalaSiatkiDyfrakcyjnej(double n, double dlF, double an){
    return (n*dlF*sqrt(an*an + 610*610))/an;
}

double niepewnoscStalejSiatki(double d, double An, double uAn, double b, double uB, double dlF, double UdlF){
    return d * sqrt(((UdlF/dlF)*(UdlF/dlF)) + ( ( (uAn/An)+(uB/b) )/(1+((An/b)*(An/b))) )*( ( (uAn/An)+(uB/b) )/(1+((An/b)*(An/b))) ) );
}

double sredniaWartoscStalejSiatkiDyf(double d1, double d2, double d3){
    return (d1+d2+d3)/3;
}

double kwadratSumySredniaMinusStalaSiatki (double dSr, double d1, double d2, double d3){
    double suma = 0.0;
    suma += dSr - d1;
    suma += dSr - d2;
    suma+= dSr - d3;
    return suma * suma;
}

double kwadratSumyNiepewnosciSiatki (double uD1, double uD2, double uD3){
    double sum = 0.0;
    sum+= uD1;
    sum+= uD2;
    sum+= uD3;
    return sum * sum;
}

double kwadratSumySredniaMinusStalaSiatki (double dSr, double d1, double d2){
    double suma = 0.0;
    suma += dSr - d1;
    suma += dSr - d2;
    return suma * suma;
}

double kwadratSumyNiepewnosciSiatki (double uD1, double uD2){
    double sum = 0.0;
    sum+= uD1;
    sum+= uD2;
    return sum * sum;
}

double wartoscNiepewnosciUdSrDwieMetody (double metA, double metB){
    return sqrt( (metA)/3*(3-1) + (metB/3) );
}

double dlugoscFaliSwiatla (double stalaDsiatki , double aN, double n, double b){
    return (stalaDsiatki*aN)/( n*sqrt( (aN*aN)+b*b ));
}

double wartoscNiepewnosciStalejSiatkiDyfrakcyjnej(double lambda, double d, double Ud, double aN, double uAn, double b, double Ub){
    return lambda * sqrt( ( (Ud/d)*(Ud/d) ) + ( ( uAn/aN + Ub/b )/(1+((aN/b)*(aN/b)) ) )*( ( uAn/aN + Ub/b )/(1+((aN/b)*(aN/b)) ) ) );
}

double lambdaSrednie (double l1, double l2, double l3){
    return (l1+l2+l3)/3;
}

double niepewnoscLambdaSrednie (double metA, double metB){
// ten sam wzor co wartoscNiepewnosciUdSrDwieMetody - podstawic metA, metB
    return sqrt((metA)/3*(3-1) + (metB/3) );
}

int main()
{
    ofstream outputFile("output.txt");

    double b, deltaD, deltaEaN, WynikniepewnoscPomiaruBezposredniego, aNl, aNp, WyniksredniaOdlegloscOdSzczeliny, uaNl, uaNp, WynikwartoscNiepewnosciUAn, dlFali, WynikstalaSiatkiDyfrakcyjnej_d;
    double Ub,UdlFali, WynikniepewnoscStalejSiatki, WyniksredniaWartoscStalejSiatkiDyf, WynikkwadratSumySredniaMinusStalaSiatki, WynikkwadratSumyNiepewnosciSiatki;
    double WynikwartoscNiepewnosciUdSrDwieMetody , WynikdlugoscFaliSwiatla, dSr, UdSr, WynikwartoscNiepewnosciStalejSiatkiDyfrakcyjnej, WyniklambdaSrednie;
    double WlambdaNiepewnoscMETA, WlambdaNiepewnoscMETB, WsrLambdaNiepewnosc;

    b = 610;
    deltaD = 1;
    deltaEaN = 2;
    aNl = 231;
    aNp =705;
    dlFali = 0.00058928;
    UdlFali= 0.00000037;
    dSr = 4.95449;
    UdSr = 0.817186;

    Ub = niepewnoscPomiaruBezposredniego(1,2);

    WynikniepewnoscPomiaruBezposredniego = niepewnoscPomiaruBezposredniego(deltaD, deltaEaN);
    WyniksredniaOdlegloscOdSzczeliny = sredniaOdlegloscOdSzczeliny(aNl,aNp);
    WynikstalaSiatkiDyfrakcyjnej_d = stalaSiatkiDyfrakcyjnej(3.0,dlFali,WyniksredniaOdlegloscOdSzczeliny);
    WynikwartoscNiepewnosciUAn  = wartoscNiepewnosciUAn(WynikniepewnoscPomiaruBezposredniego,WynikniepewnoscPomiaruBezposredniego);
    WynikniepewnoscStalejSiatki =niepewnoscStalejSiatki(WynikstalaSiatkiDyfrakcyjnej_d, WyniksredniaOdlegloscOdSzczeliny, WynikwartoscNiepewnosciUAn,b, Ub, dlFali, UdlFali);
    WyniksredniaWartoscStalejSiatkiDyf = sredniaWartoscStalejSiatkiDyf(5.06184,4.92013, 4.88150);
    WynikkwadratSumySredniaMinusStalaSiatki = kwadratSumySredniaMinusStalaSiatki(4.95449, 5.06184, 4.92013, 4.88150);
    WynikkwadratSumyNiepewnosciSiatki = kwadratSumyNiepewnosciSiatki(0.148671, 0.759558, 0.507179);
    WynikwartoscNiepewnosciUdSrDwieMetody = wartoscNiepewnosciUdSrDwieMetody(WynikkwadratSumySredniaMinusStalaSiatki,WynikkwadratSumyNiepewnosciSiatki);
    WynikdlugoscFaliSwiatla = dlugoscFaliSwiatla(dSr, 69.5, 1, b);
    WynikwartoscNiepewnosciStalejSiatkiDyfrakcyjnej = wartoscNiepewnosciStalejSiatkiDyfrakcyjnej(652.304, dSr, UdSr, 166.5, 2.58199,              610, 2.58199);
    WyniklambdaSrednie = lambdaSrednie(440.899, 449.292, 443.358);

    WlambdaNiepewnoscMETA = kwadratSumySredniaMinusStalaSiatki(646.298, 640.293, 652.304);
    WlambdaNiepewnoscMETB = kwadratSumyNiepewnosciSiatki(10.8109, 10.8255);
    WsrLambdaNiepewnosc = niepewnoscLambdaSrednie(WlambdaNiepewnoscMETA, WlambdaNiepewnoscMETB);
    cout << WsrLambdaNiepewnosc << endl << endl;
/*


LambdaSr
584.48 ( błąd pomiaru)

646.298

lambdaFiltr





652.304


Ulambda



7.45706
7.46370
7.33858





*/
//cout << (640.293 + 652.304)/2.0 << endl << endl;



    cout << WynikniepewnoscPomiaruBezposredniego << endl;
    cout << WyniksredniaOdlegloscOdSzczeliny << endl;
    cout << WynikwartoscNiepewnosciUAn << endl;
    cout << WynikstalaSiatkiDyfrakcyjnej_d << endl;
    cout <<  WynikniepewnoscStalejSiatki << endl;
    cout <<  WyniksredniaWartoscStalejSiatkiDyf << endl;
   // cout <<  WynikkwadratSumySredniaMinusStalaSiatki << endl;
   // cout <<  WynikkwadratSumyNiepewnosciSiatki << endl;
    cout <<  WynikwartoscNiepewnosciUdSrDwieMetody << endl;
    cout << WynikdlugoscFaliSwiatla << endl;
    cout << WynikwartoscNiepewnosciStalejSiatkiDyfrakcyjnej <<endl;
    cout << WyniklambdaSrednie <<endl;


 ////////////////////////////////////////////////////////////

    outputFile << WynikniepewnoscPomiaruBezposredniego << endl;
    outputFile << WyniksredniaOdlegloscOdSzczeliny << endl;

    outputFile << wartoscNiepewnosciUAn(WynikniepewnoscPomiaruBezposredniego,WynikniepewnoscPomiaruBezposredniego) << endl;
    outputFile << WynikstalaSiatkiDyfrakcyjnej_d << endl;
    outputFile <<  WynikniepewnoscStalejSiatki << endl;
    outputFile << WyniksredniaWartoscStalejSiatkiDyf <<endl;

   // outputFile <<  WynikkwadratSumySredniaMinusStalaSiatki << endl;
   // outputFile <<  WynikkwadratSumyNiepewnosciSiatki << endl;
    outputFile <<  WynikwartoscNiepewnosciUdSrDwieMetody << endl;
    outputFile << WynikdlugoscFaliSwiatla << endl;
    outputFile << WynikwartoscNiepewnosciStalejSiatkiDyfrakcyjnej << endl;
    outputFile << WyniklambdaSrednie << endl;


    outputFile.close();
    return 0;
}
