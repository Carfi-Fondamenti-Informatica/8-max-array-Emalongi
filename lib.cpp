
#include <iostream>
#include "lib.h"
using namespace std;
 // N numero di elementi, i contatore for , max per valore massimo,
 float mass(int N, float array[], float max) {

     max = array[0];
     for (int i = 1; i < N; i++) {
         if (array[i] > max) {
             max=array[i];

         }
     } return max;
 }
