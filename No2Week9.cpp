// Nama: Fauta Fahrezi Tuhuteru 
// NIM: 25/565738/TK/63814
// Program Studi: Teknologi Informasi

#include <iostream>
#include <cmath>
using namespace std;

double distanceBetween(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

int main() {
    double x1, y1, x2, y2;

    cout << "Input koordinat titik pertama (x1 y1): ";
    cin >> x1 >> y1;
    cout << "Input koordinat titik kedua (x2 y2): ";
    cin >> x2 >> y2;

    double distance = distanceBetween(x1, y1, x2, y2);
    cout << "Jarak antara dua titik = " << distance << endl;

    return 0;
}
