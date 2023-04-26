#include <iostream>
using std::cout;
using std::endl;
using std::cin;

int main()
{

    cout << "tast 1\n";

    double a, b, c;
    cout << "First number:";
    cin >> a;
    cout << "Second number:";
    cin >> b;
    cout << "Third number:";
    cin >> c;
    cout << ((a + b + c) / 3) << endl;

    cout << "\n\n\n\ntast 2\n";

    double d, e, x;
    cout << "First number:";
    cin >> d;
    cout << "Second number:";
    cin >> e;
    cout << "x = " << (-e / d) << endl;

    cout << "\n\n\n\ntask 3\n";
    
    double k, l, t;
    cout << "Number:";
    cin >> k;
    cout << "Degree";
    cin >> l;
    t = 1;
    for (int i = 0; i < l; i++)
    {
        t = t * k;
    }
    cout << t;

    cout << "\n\n\n\ntast 4\n";
    double pi, r;
    cout << "Radius: ";
    cin >> r;
    pi = 3.14;
    cout << "Area " << (pi * (r * r)) << endl;
    cout << "Length " << (pi * (r + r)) << endl;


    cout << "\n\n\n\ntast 5\n";
    double h;
    cout << "Hryvnia: ";
    cin >> h;
    cout << "dol " << (h * 0.027) << endl;
    cout << "bit " << (h * 0.000001) << endl;
    cout << "eur " << (h * 0.025) << endl;
    

    cout << "\n\n\n\ntast 6\n";
   
    double kil;
    cout << "Kilometers: ";
    cin >> kil;
    cout << "Statute miles " << (kil * 0.621371) << endl;
    cout << "Nautical miles " << (kil * 0.539957) << endl;

    cout << "\n\n\n\ntast 7\n";

    double chi, cho;
    cout << "Number " << endl;
    cin >> chi;
    cout << "Percentage " << endl;
    cin >> cho;
    cout << (chi / 100) * cho << endl;

    cout << "\n\n\n\ntast 8\n";


}


