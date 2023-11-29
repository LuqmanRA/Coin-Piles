#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> data;
    int n, a, b, i, hasil;

    cout << "Masukkan jumlah Tumpukan koin: ";
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        cout << "Tumpukan koin ke-" << i << endl;
        cout << "Tumpukan koin kanan: ";
        cin >> a;
        cout << "Tumpukan koin kiri: ";
        cin >> b;
        cout << endl;

        hasil = (a + b) % 3;
        data.push_back(hasil);
        
    }

    cout << "Dapat mengosongkan tumpukan:" << endl;
    for (i = 0; i < n; i++)
    {
        if (data.at(i) == 0)
        {
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    
    

    system("pause");
    return 0;
}