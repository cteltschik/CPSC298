//
//  Project_FrequenciesOfMusicalNotes.cpp
//  Implementation_2
//
//  Created by Charley Teltschik on 2/18/24.
//

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    // frequency formula: fk,ν = r_freq * pow(2, v) * pow(dTwelfthRootOfTwo,k)
    // wavelength formula: wk,v = c/fk,v
    double r_freq = 16.35;
    double c = 345.0;
    double dTwelfthRootOfTwo = 1.059463094359;
    
    cout << "Reference Frquency: " << r_freq << " Hz." << endl;
    cout << "Speed of Sound: " << c << " m/s." << endl;
    
    //C0
    string co_note = "C0";
    int co_vvalue = 0;
    int co_kvalue = 0;
    double co_freq = r_freq;
    double co_wave = (c*100)/co_freq;
    cout << "Note: " << co_note << ";  nu: " << co_vvalue << "; k: " << co_kvalue << "; frequency: " << co_freq << " Hz;   wavelength: " << co_wave << " cm/s" << endl;
    
    //C#0
    string csharpo_note = "C#0";
    int csharpo_vvalue = 0;
    int csharpo_kvalue = 1;
    long two_nu = pow(2, csharpo_vvalue);
    double csharpo_freq = r_freq * two_nu * pow(dTwelfthRootOfTwo, csharpo_kvalue);
    double csharpo_wave = (c*100)/csharpo_freq;
    cout << "Note: " << csharpo_note << "; nu: " << csharpo_vvalue << "; k: " << csharpo_kvalue << "; frequency: " << csharpo_freq << " Hz; wavelength: " << csharpo_wave << " cm/s" << endl;
    
    //D0
    string do_note = "D0";
    int do_vvalue = 0;
    int do_kvalue = 2;
    two_nu = pow(2, do_vvalue);
    double do_freq = r_freq * two_nu * pow(dTwelfthRootOfTwo, do_kvalue);
    double do_wave = (c*100)/do_freq;
    cout << "Note: " << do_note << ";  nu: " << do_vvalue << "; k: " << do_kvalue << "; frequency: " << do_freq << " Hz; wavelength: " << do_wave << " cm/s" << endl;
    
    //C4
    string c4_note = "C4";
    int c4_vvalue = 4;
    int c4_kvalue = 0;
    two_nu = pow(2, c4_vvalue);
    double c4_freq = r_freq * two_nu * pow(dTwelfthRootOfTwo, c4_kvalue);
    double c4_wave = (c*100)/c4_freq;
    cout << "Note: " << c4_note << ";  nu: " << c4_vvalue << "; k: " << c4_kvalue << "; frequency: " << c4_freq << " Hz;   wavelength: " << c4_wave << " cm/s" << endl;
    
    //D#7
    string dsharp7_note = "D#7";
    int dsharp7_vvalue = 7;
    int dsharp7_kvalue = 3;
    two_nu = pow(2, dsharp7_vvalue);
    double dsharp7_freq = r_freq * two_nu * pow(dTwelfthRootOfTwo, dsharp7_kvalue);
    double dsharp7_wave = (c*100)/dsharp7_freq;
    cout << "Note: " << dsharp7_note << "; nu: " << dsharp7_vvalue << "; k: " << dsharp7_kvalue << "; frequency: " << dsharp7_freq << " Hz; wavelength: " << dsharp7_wave << " cm/s" << endl;
    
    //C8
    string c8_note = "C8";
    int c8_vvalue = 8;
    int c8_kvalue = 0;
    two_nu = pow(2, c8_vvalue);
    double c8_freq = r_freq * two_nu * pow(dTwelfthRootOfTwo, c8_kvalue);
    double c8_wave = (c*100)/c8_freq;
    cout << "Note: " << c8_note << ";  nu: " << c8_vvalue << "; k: " << c8_kvalue << "; frequency: " << c8_freq << " Hz;  wavelength: " << c8_wave << " cm/s" << endl;
    
    return 0;
}
