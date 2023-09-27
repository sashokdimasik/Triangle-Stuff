/***********************************************
 * Author:       Platonov A.A.                 *
 * Group:        ПИ-231                        *
 * Variant:      14                            *
 * Date:         25.09.2023                    *
 * Project name: Triangle' Stuff               *
 * OnlineGDB: https://onlinegdb.com/DrL4NIeUv3 *
 ***********************************************/

#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main() {
  double sideA, angleA, angleB, sideB, sideC, bisectorA, medianA, heightA;
  
  cout << "Enter side A";
  cin >> sideA;
  cout << "Enter angle A";
  cin >> angleA;
  cout << "Enter angle B";
  cin >> angleB;
  
  angleA *= M_PI / 180;
  angleB *= M_PI / 180;
  sideB = sideA * sin(angleB) / sin(angleA);
  sideC = sideA * sin(M_PI - angleA - angleB) / sin(angleA);
  bisectorA = 2 * sideB * sideC * cos(angleA / 2) / (sideB + sideC);
  medianA = sqrt((sideB * sideB + sideC * sideC + 2 * sideB * sideC * cos(angleA)) / 2);
  heightA = sideC * sin(angleB);
  
  cout << fixed << setprecision(6) << "\nSide B = " << sideB
                                   << "\nSide C = " << sideC
                                   << "\nBisector of A = " << bisectorA
                                   << "\nMedian of A = "<< medianA
                                   << "\nHeight from A = " << heightA << '\n';
  
  return 0;
}
