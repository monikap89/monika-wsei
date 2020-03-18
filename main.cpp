#include <iostream>
#include <cstdlib>

float waga, wzrost, wynik, analiza;
float bmi(float waga, float wzrost);
float wart(float analiza);

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
    cout << wart(analiza);
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

float wart(float analiza)
{
    if (wynik<18)
        cout << "\t\tWazysz za malo, sprobuj troche przytyc! :)" << endl;

    else if (18.5>=wynik<=24.9)
        cout << "\t\tWazysz prawidlowo. Tak trzymaj! :)" << endl;

    else
        cout << "\t\tWazysz zbyt duzo. Musisz o siebie zadbac!" << endl;
}