#include <bits/stdc++.h>

using namespace std;

int mdc(int a, int b)
{
    if (b == 0)
        return a;

    return mdc(b, a % b);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    char div = '/', op = '\0';
    int n1 = 0, d1 = 0, n2 = 0, d2 = 0, nr = 0, dr = 0;
    int n = 0;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> n1 >> div >> d1 >> op >> n2 >> div >> d2;

        switch (op)
        {
        case '+':
            nr = n1 * d2 + n2 * d1;
            dr = d1 * d2;
            break;

        case '-':
            nr = n1 * d2 - n2 * d1;
            dr = d1 * d2;
            break;

        case '*':
            nr = n1 * n2;
            dr = d1 * d2;
            break;

        case '/':
            nr = n1 * d2;
            dr = n2 * d1;
            break;
        }

        int fator = max(nr, dr);
        int mdc_nr_dr = mdc(nr, dr);
        int simp_nr = nr / mdc_nr_dr, simp_dr = dr / mdc_nr_dr;

        if (simp_dr < 0)
        {
            simp_dr = -simp_dr;
            simp_nr = -simp_nr;
        }

        bool possuem_divisores_iguais = false;

        cout << nr << '/' << dr << " = " << simp_nr << '/' << simp_dr << '\n';
    }

    return 0;
}