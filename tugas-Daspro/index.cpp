#include <iostream>
#include <math.h>
using namespace std;

typedef struct koordinat
{
    float x;
    float y;
} titik;
// Konstruktor
void makePoint(titik &t, float absis, float ordinat);

// Baca Tulis
void tulis(titik t);
void bacaPoint(titik &t);

// Selector
float getAbsis(titik t);
float getOrdinat(titik &t);

// Korektor
void setAbsis(titik &t, float newx);
void setOrdinat(titik &t, float newy);

// Cetak Garis
void cetakGaris();

// Posisi
bool isOrigin(titik t);
bool isOnSbX(titik t);
bool isOnSbY(titik t);
int kuadran(titik t);

// Operasi Tipe
void nextX(titik &t);
void nextY(titik &t);
void miror(titik &t, char sumbu);
void geser(titik &t, float deltaX, float deltaY);
float jarakPusat(titik t);
float jarak2titik(titik t1, titik t2);

int main()
{
    // TITIK A;
    titik A;
    float a, b;
    cout << "Masukkan sumbu x = ";
    cin >> a;
    cout << "Masukkan sumbu y = ";
    cin >> b;
    makePoint(A, a, b);
    cout << "Titik A : ";
    tulis(A);
    cout << getAbsis(A) << " Sebagai Titik X atau absis\n";
    cout << getOrdinat(A) << " Sebagai Titik Y atau ordinat\n";
    setOrdinat(A, 0);
    cout << "Proses setOrdinat(A,0)\n";
    cout << "Titik A Baru: ";
    tulis(A);
    cout << "isOrigin(A) = " << isOrigin(A) << endl;
    cout << "isOnSbX(A)  = " << isOnSbX(A) << endl;
    cout << "isOnSby(A)  = " << isOnSbY(A) << endl;

    cetakGaris();

    // TITIK B
    titik B;
    bacaPoint(B);
    cout << "titik B : ";
    tulis(B);
    cout << getAbsis(B) << " Sebagai titik X atau absis\n";
    cout << getOrdinat(B) << " Sebagai Titik Y Atau ordinat\n";
    cout << "isOrigin(B)     = " << isOrigin(B) << endl;
    cout << "kuadran(B)      = " << kuadran(B) << endl;

    cout << "nextX(B)        = ";
    nextX(B);
    tulis(B);

    cout << "nextY(B)        = ";
    nextY(B);
    tulis(B);

    cout << "miror(B,'x')    = ";
    miror(B, 'x');
    tulis(B);

    cout << "miror(B,'y')    = ";
    miror(B, 'y');
    tulis(B);

    cout << "geser(B ,2 ,2)  = ";
    geser(B, 2, 2);
    tulis(B);
    cout << "jarakPusat(B)   =" << jarakPusat(B) << endl;
    cout << "jarak2titik(A,B) = " << jarak2titik(A, B) << endl;

    return 0;
}

void makePoint(titik &t, float absis, float ordinat)
{
    t.x = absis;
    t.y = ordinat;
};

void tulis(titik t)
{
    cout << "(" << t.x << ", " << t.y << ")" << endl;
};

void bacaPoint(titik &t)
{
    cout << "Masukkan Sumbu X = ";
    cin >> t.x;
    cout << "Masukkan Sumbu Y = ";
    cin >> t.y;
}

float getAbsis(titik t)
{
    return t.x;
}

float getOrdinat(titik &t)
{
    return t.y;
};

void setOrdinat(titik &t, float newY)
{
    t.y = newY;
}

void setAbsis(titik &t, float newX)
{
    t.x = newX;
}

void cetakGaris()
{
    for (int i = 0; i < 30; i++)
    {
        cout << "=";
    }
    cout << endl;
}

bool isOrigin(titik t)
{
    return (t.x == 0 && t.y == 0);
}

bool isOnSbX(titik t)
{
    return (t.y == 0 && t.x != 0);
}

bool isOnSbY(titik t)
{
    return (t.x == 0 && t.y != 0);
}

int kuadran(titik t)
{
    if (t.x > 0 && t.y > 0)
    {
        return 1;
    }
    else if (t.x < 0 && t.y > 0)
    {
        return 2;
    }
    else if (t.x < 0 && t.y < 0)
    {
        return 3;
    }
    else if (t.x > 0 && t.y < 0)
    {
        return 4;
    }
    else
    {
        return 0;
    }
}

void nextX(titik &t)
{
    t.x += 1;
}
void nextY(titik &t)
{
    t.y += 1;
}

void miror(titik &t, char sumbu)
{
    if (sumbu == 'X' || sumbu == 'x')
    {
        t.y *= -1;
    }
    else if (sumbu == 'Y' || sumbu == 'y')
    {
        t.x *= -1;
    }
}

void geser(titik &t, float deltaX, float deltaY)
{
    t.x += deltaX;
    t.y += deltaY;
}

float jarakPusat(titik t)
{
    return sqrt(pow(t.x, 2) + pow(t.y, 2));
};

float jarak2titik(titik t1, titik t2)
{
    return sqrt(pow(t2.x - t1.x, 2) + pow(t2.y - t1.y, 2));
};