#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>
using namespace std;
const int n = 10;

int main()
{
    cout << "Jestem programem ktory scharakteryzuje Twoj ciag." << endl;
    cout << endl;
    cout << "a)." << endl;
    cout << endl;
    cout << "Petla zakonczy sie kiedy wpiszesz cyfre nieparzysta." << endl;
    cout << "Wpisz prosze pierwsza liczbe." << endl;
    cout << endl;
    int pierw, p1, il_wyr, sum, najm;
    double sre;
    p1 = 0;
    il_wyr=1;
    cin >> pierw;
    cout << endl;
    najm = pierw;
    sum = pierw;
        while (pierw%2==0)
            {
                cout << "Liczba parzysta. Wprowadz kolejna." << endl;
                cout << endl;
                cin >> p1;
                cout << endl;
                if (p1 < pierw)
                {
                    cout << "Najmniejszy wyraz. " << endl;
                    cout << endl;
                    najm = p1;
                }
                if (p1%2 == 0)
                {
                    il_wyr++;
                    sum = sum + p1;
                }
                pierw=p1;
            }
    if (p1==0)
    {
        cout << "Ciag jest pusty!" << endl;
    }
    cout << "Liczba nieparzysta!" << endl;
    cout << endl;
    cout << "Najmniejsza liczba bylo: " << najm << "." << endl;
    cout << endl;
    cout << "Suma wszystkich Twoich parzystych liczb  to: " << sum << "." << endl;
    cout << endl;
    cout << "Liczba wpisanych przez Ciebie parzystych liczb : " << il_wyr << "." << endl;
    cout << endl;
    sre = ((double (sum)) / (double (il_wyr)));
        if (sre < 1)
        {
            cout << "Nie mozna wyciagnac sredniej z liczb ujemnych!" << endl;
        }
        else
        {
            cout << "Srednia z liczb wpisanych przez Ciebie (bez ostatniej) to: " << sre << "." << endl;
        }
    cout << endl;
    cout << endl;
    cout << "b)." << endl;
    cout << endl;
    int k;
        do
        {
            cout << endl;
            cout << "Wpisz liczbe dodatnia i mniejsza od 10 ktora bedzie wspolczynnikiem 'k'." << endl;
            cout << endl;
            cin >> k;
        }
        while (10 <= k || k < 1);
    cout << endl;
    cout << "Wspolczynnik 'k' wynosi " << k << "." << endl;
    cout << endl;
    cout << endl;
    cout << "c)." << endl;
    cout << endl;
    cout << "Wpisz " << k << " dowolnych liczb calkowitych." << endl;
    cout << endl;
    int tabl [k], maks, mini, roznica;
    double sred_tab;
    sum=0;
    for(int i=0;i<k;i++)
        {
            cin >> tabl[i];
            if (i==0)
            {
                mini = tabl[0];
                maks = tabl[0];
            }
            if(mini>tabl[i])
                {
                mini=tabl[i];
                }
            else if(maks<tabl[i])
                {
                maks = tabl[i];
                }
                sum+=tabl[i];
        }
    sred_tab= (double (sum)/double (k));
    roznica = (maks-mini);
    cout << endl;
    cout << "Suma podanych przez Ciebie cyfr to: " << sum << " ." << endl;
    cout << endl;
    if (sred_tab < 1)
        {
            cout << "Nie mozna wyciagnac sredniej z liczb ujemnych!" << endl;
        }
        else
        {
            cout << "Srednia podanych przez Ciebie cyfr to: " << sred_tab << " ." << endl;
        }
    cout << endl;
    cout << "Najwiekszy byl element: " << maks << " ." << endl;
    cout << endl;
    cout << "Najmniejszy byl element: " << mini << " ." << endl;
    cout << endl;
    cout << "Roznica miedzy najwiekszym i najmniejszym elementem to: " << roznica << " ." << endl;
    cout << endl;
    cout << endl;
    cout << "d)." << endl;
    cout << endl;
    srand(time(0));
    int g1, g2;
    g1=0;
    g2=0;
    cout << "Wpisz poczatek przedzialu." << endl;
    cin >> g1;
        do
        {
            g2=0;
            cout << "Wpisz koniec przedzialu." << endl;
            cin >> g2;

        }
        while (g2 <= g1);
        cout << endl;
        cout << "Przedzial z ktorego wylosujemy " << n << " liczby to: (" << g1 << " , " << g2 << ")." << endl;
        cout << endl;
        int ar[n], dod;
        double licznik =0;
        double sr = 0;
        int ma, mi;
        ma=0;
        mi=0;
        licznik=0;
        dod = 0;
        for(int l=0; l<n; l++)
        {
            cout << endl;
            ar[l] = rand()%((g2 - g1) + 1) + g1;
            cout << ar[l] << endl;
            if((mi>ar[l]) || mi ==0 )
                {
                mi=ar[l];
                }
            if((ma<ar[l]) || ma ==0)
                {
                        ma = ar[l];
                }
                dod+= ar[l];

        }
        sr = (double (dod) / (double (n)));
        cout << endl;
        cout << "Najwiekszy byl element: " << ma << " ." << endl;
        cout << endl;
        cout << "Najmniejszy byl element: " << mi << " ." << endl;
        cout << endl;
        cout << "Suma wylosowanych liczb to: " << dod << " ." << endl;
        cout << endl;
        cout << "Srednia to: " << sr << " ." << endl;
        cout << endl;
        for (int z=0; z<n; z++)
        {
            if (ar[z] > sr)
            {
                licznik++;
            }
        }
        cout << "Liczb wiekszych od sredniej bylo: " << licznik << " ." << endl;
    return 0;
}
