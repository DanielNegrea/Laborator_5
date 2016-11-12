#include <iostream>

using namespace std;

void schimba(int a[], int n) {
   int i;
   for (i = 0; i < n; i++) {
      if(a[i] < 0)
         a[i] = -a[i];
   }
}

int minim(int a[], int n) {
   int i;
   int m = a[0];
   for (i = 1; i < n; i++) {
      if(a[i] < m)
         m = a[i];
   }
   return m;
}
int main(){
    int a[] = {12, -14, 7, 23, 5, -71, 4};
    schimba(a, 7);   //  In sir sunt 7 elemente
    int mini = minim(a, 7);
    cout << "Minimul valorilor dupa schimbarea semnelor este: " << mini << endl;
    return 0;
}
