#include <iostream>
#include <cstdlib>

float waga, wzrost, wynik;
float bmi(float waga, float wzrost);

using namespace std;

int main() {
    cout << "\t\t=================================" << endl;
    cout << "\t\t=== PROGRAM DO OBLICZANIA BMI ===" << endl;
    cout << "\t\t=================================\n\n" << endl;

    cout << "\tTwoja waga (wynik podaj w kilogramach): " ;
    cin >> waga;
    cout << "\tTwoj wzrost (wynik podaj w centymetrach): ";
    cin >> wzrost;
    cout << endl;
    wynik = bmi(waga, wzrost);

    cout << "\t\tTwoje BMI wynosi: " << wynik << endl;

    cout << endl;
    cout << endl;
    cout << "\t\t\t=== KONIEC PROGRAMU ===" << endl;
    cout << endl;
    cout << endl;
    system("pause");

    return 0;
}

float bmi(float waga, float wzrost)
{
    return waga/((wzrost/100)*(wzrost/100)) ;
}
