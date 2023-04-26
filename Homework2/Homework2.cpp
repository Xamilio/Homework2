#include <iostream>
using std::cout;
using std::endl;
using std::cin;

int main()
{

   cout << "\n\n1. Write a program that finds the arithmetic mean of three real numbers.\n\n";

   double a, b, c;
   cout << "First number:";
   cin >> a;
   cout << "Second number:";
   cin >> b;
   cout << "Third number:";
   cin >> c;
   cout << "Result = " << ((a + b + c) / 3) << endl;

   cout << "\n\n2. Write a program that finds the root of the linear equation ax + b = 0.\n\n";

   double d, e, x;
   cout << "Input A:";
   cin >> d;
   cout << "Input B:";
   cin >> e;
   cout << "X = " << (-e / d) << endl;

   cout << "\n\n3. The user enters a number and degree. The program calculates the specified power\n\n";

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
   cout << "Result = " << t << endl;

   cout << "\n\n4. Write a program that prompts the user to enter the radius of a circle and then calculates the area and length of that circle\n\n";
   double pi, r;
   cout << "Radius: ";
   cin >> r;
   pi = 3.14;
   cout << "Area " << (pi * (r * r)) << endl;
   cout << "Length " << (pi * (r + r)) << endl;


   cout << "\n\n5. Write a program that allows the user to enter the number of hryvnias from the keyboard, and converts this amount into dollars, euros and bitcoins\n\n";
   double h;
   cout << "Hryvnia: ";
   cin >> h;
   cout << "dol " << (h * 0.027) << endl;
   cout << "bit " << (h * 0.000001) << endl;
   cout << "eur " << (h * 0.025) << endl;


   cout << "\n\n6. Write a program that converts kilometers to land and nautical miles\n\n";

   double kil;
   cout << "Kilometers: ";
   cin >> kil;
   cout << "Statute miles " << (kil * 0.621371) << endl;
   cout << "Nautical miles " << (kil * 0.539957) << endl;

   cout << "\n\n7. Write a program that finds the percentage P of a number N.\n\n";

   double chi, cho;
   cout << "Number " << endl;
   cin >> chi;
   cout << "Percentage " << endl;
   cin >> cho;
   cout << "Result = " << (chi / 100) * cho << endl;    


}

