#include <iostream>
using namespace std;

int a[20];
int n;

double rerata(double a, double b) {
    return (a + b) / 2;
}

string status(double rata, double nil) {
    if (rata >= 70 || nil >= 80)
        return "Asroni Lulus";
    else
        return "Asroni Gagal";
}

string status2(double rata, double nil) {
    if (rata >= 70 || nil >= 80)
        return "Lia Lulus";
    else
        return "Lia Gagal";
}

string status3(double rata, double nil) {
    if (rata >= 70 || nil >= 80)
        return "Joko Lulus";
    else
        return "Joko Gagal";
}

void display() {
    cout << endl;
    cout << "======================" << endl;
    cout << "Kandidat yang diterima" << endl;
    cout << "======================" << endl;
    cout << "2";
   
}

void unsorted() {
    cout << endl;
    cout << "============================" << endl;
    cout << "Kandidat yang tidak diterima" << endl;
    cout << "============================" << endl;
    cout << "1";
}

int main() {
    double nilM, nilBING;
    cout << "Masukkan nilai Matematika = ";
    cin >> nilM;
    cout << "Masukkan nilai Bahasa Inggris = ";
    cin >> nilBING;
    cout << "status kelulusan = " << status(rerata(nilM, nilBING), nilM);
    cout << "\nstatus kelulusan ke 2 = " << status2(rerata(nilM, nilBING), nilM);
    cout << "\nstatus kelulusan ke 3 = " << status3(rerata(nilM, nilBING), nilM);
    display();
    unsorted();
    return 0;
}

   



