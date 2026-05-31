#include <bits/stdc++.h>

using namespace std;

int main()
{
    int NC = 0;
    cin >> NC;

    for (int i = 0; i < NC; i++)
    {
        int n, k;
        cin >> n >> k;

        int vivos = n, prox = k > n ? k % n : k;
        list<int> pessoas_vivas;

        for (int j = 1; j <= n; j++)
            pessoas_vivas.push_back(j);

        while (vivos > 1)
        {
            pessoas_vivas.remove(prox);
            prox += k;

            if (prox > n)
                prox %= n;
        }

        cout << "Case " << i + 1 << ": " << pessoas_vivas.front() << '\n';
    }

    return 0;
}