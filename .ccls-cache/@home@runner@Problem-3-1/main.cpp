#include <iostream>

using namespace std;

int main() {
  int N;

  cin >> N;

  // declare arrays
  int A[N];
  int G[N];

  // for loop to cycle through array
  for (int i = 0; i < N; i ++){
    cin >> A[i];
  }

  // loop to determine larger value in array, way to keep count?
  int larger = 0;
  int count = 0;

  for (int k = 0; k < N; k++){
    if(A[k] > larger){
      larger = A[k];
      G[count] = larger;
    }
    count++;
  }

    // output the number of indexes and the array of values left
  cout << count << endl;
     for (int j = 0; j < count; j++){
       if(j != count-1){  // (gi - 1)
         cout << G[j];
       }
       else {
         cout << G[j];
       }
     }

}