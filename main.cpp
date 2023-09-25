/*********************************
 * Author:       Platonov A.A.   *
 * Group:        ПИ-231          *
 * Variant:      14              *
 * Date:         20.09.2023      *
 * Project name: Triangle' Stuff *
 *********************************/

#include <iostream>
#include <iomanip>
#include <math.h>

#define SIDE_A 0.0635

int main() {
  double angleA, angleB, sideB, sideC, bisectorA, medianA, heightA;
  angleA = 16 * M_PI / 180;
  angleB = 44 * M_PI / 180;
  
  sideB = SIDE_A * sin(angleB) / sin(angleA);
  sideC = SIDE_A * sin(M_PI - angleA - angleB) / sin(angleA);
  bisectorA = 2 * sideB * sideC * cos(angleA / 2) / (sideB + sideC);
  medianA = sqrt((sideB * sideB + sideC * sideC + 2 * sideB * sideC * cos(angleA)) / 2);
  heightA = sideC * sin(angleB);
  
  std::cout << std::fixed << std::setprecision(6) << "Side B = " << sideB << "\nSide C = " << sideC << "\nBisector of A = " << bisectorA << "\nMedian of A = " << medianA << "\nHeight from A = " << heightA << '\n';
  
  return 0;
}