#include <iostream>
#include <math.h>
using namespace std;

float maxRec(float arr[], int n)
{
    if (n == 1)
    {
        return arr[0];
    }
    else
    {
        return max(arr[n - 1], maxRec(arr, n - 1));
    }
}
struct umr
{
    string kab_kota;
    double gaji;
};

double maxGaji(struct umr arr[], int n)
{
    if (n == 1)
    {
        return arr[0].gaji;
    }
    else
    {
        return max(arr[n - 1].gaji, maxGaji(arr, n - 1));
    }
}

int main()
{

    float angka[5] = {85, 78.2, 3.3, 47, 55};
    cout << "nilai max = " << maxRec(angka, 5) << endl;

    umr jateng[3];
    jateng[0].kab_kota = "Surakarta";
    jateng[0].gaji = 2269070;
    jateng[1].kab_kota = "Semarang";
    jateng[1].gaji = 3243969;
    jateng[2].kab_kota = "Banjarnegara";
    jateng[2].gaji = 2038005;
    cout << "Gaji Terbesar = Rp " << maxGaji(jateng, 3) << endl;
    return 0;
}