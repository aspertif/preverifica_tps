#include <iostream>
#include <vector>
#include <fstream>
#include <algorithm>
#include <algorithm>

using namespace std;

int main()
{
    ifstream inputFile("input.txt");
    if (!inputFile)
    {
        cout << "errore nell'apertura del file" << endl;
struct Processo {
    int id;
    int durata;
    int priorita;
};

bool confrontaProcessi(const Processo &a, const Processo &b) {
    if (a.priorita != b.priorita) {
        return a.priorita > b.priorita;
    }
    return a.durata < b.durata;
}

int main() {
    ifstream fileInput("input.txt");
    ofstream fileOutput("output.txt");

    if (!fileInput.is_open()) {
        cerr << "Errore: Impossibile aprire input.txt" << endl;
        return 1;
    }

    int N;
    inputFile >> N;

    int* I = new int[N];
    int* D = new int[N];
    int* P = new int[N];

    for (int i = 0; i < N; i++)
        inputFile >> I[i] >> D[i] >> P[i];

    inputFile.close();

    for (int i = 0; i < N - 1; i++)
    {
        for (int j = 0; j < N - i - 1; j++)
        {
            if (P[j] < P[j + 1] ||
               (P[j] == P[j + 1] && D[j] > D[j + 1]))
            {
                swap(I[j], I[j + 1]);
                swap(D[j], D[j + 1]);
                swap(P[j], P[j + 1]);
            }
        }
    fileInput >> N;

    vector<Processo> listaProcessi(N);

    for (int i = 0; i < N; i++) {
        fileInput >> listaProcessi[i].id >> listaProcessi[i].durata >> listaProcessi[i].priorita;
    }

    cout << "Ordine di esecuzione dei processi: ";
    for (int i = 0; i < N; i++)
        cout << I[i] << " ";
    cout << endl;
    sort(listaProcessi.begin(), listaProcessi.end(), confrontaProcessi);

    for (int i = 0; i < N; i++) {
        fileOutput << listaProcessi[i].id << (i == N - 1 ? "" : " ");
        cout << listaProcessi[i].id << (i == N - 1 ? "" : " ");
    }

    delete[] I;
    delete[] D;
    delete[] P;
    fileInput.close();
    fileOutput.close();

    return 0;
}
