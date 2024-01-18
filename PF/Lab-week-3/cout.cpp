<<<<<<< HEAD
#include <iostream>
#include <queue>
#include <vector>
#include <cstdlib>
#include <fstream>
#include <random>
#include <ctime>

using namespace std;

class Compare
{
public:
    bool operator()(int &a, int &b)
    {
        return a >= b;
    }
};

// Task 2
template <class T>
void HeapSort(vector<T> &V) // O(n log n)
{
    priority_queue<T, vector<T>, Compare> PQ;

    for (int i = 0; i < V.size(); i++)
    {
        PQ.push(V[i]);
    }

    V.clear();

    while (!PQ.empty())
    {
        V.push_back(PQ.top());
        PQ.pop();
    }
}

// Task 3
void Randomized_Init(vector<int> &V)
{
    for (int i = 0; i < V.size(); i++)
    {
        V[i] = rand() % 100;
    }
}

void Print(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << "  ";
    }
    cout << endl
         << endl
         << endl;
}

void createRandomFile(string fileName, int size)
{
    ofstream file(fileName);
    for (int i = 0; i < size * 1024 * 1024; i++)
    {
        file << rand() % 10 << " ";
    }
}

void LoadData(string fileName, vector<int> &v)
{
    ifstream file(fileName);
    int value;

    while (file >> value)
    {
        v.push_back(value);
    }

    file.close();
}

main()
{
    vector<int> v(21);


    createRandomFile("dsa.txt", 1024);

    LoadData("dsa.txt", v);

    cout << "Time Before sorting: " << time(0) << endl;

    HeapSort(v);

    cout << "Time After sorting: " << time(0) << endl;

    int x;
    cin >> x;
=======
#include <iostream>
#include <queue>
#include <vector>
#include <cstdlib>
#include <fstream>
#include <random>
#include <ctime>

using namespace std;

class Compare
{
public:
    bool operator()(int &a, int &b)
    {
        return a >= b;
    }
};

// Task 2
template <class T>
void HeapSort(vector<T> &V) // O(n log n)
{
    priority_queue<T, vector<T>, Compare> PQ;

    for (int i = 0; i < V.size(); i++)
    {
        PQ.push(V[i]);
    }

    V.clear();

    while (!PQ.empty())
    {
        V.push_back(PQ.top());
        PQ.pop();
    }
}

// Task 3
void Randomized_Init(vector<int> &V)
{
    for (int i = 0; i < V.size(); i++)
    {
        V[i] = rand() % 100;
    }
}

void Print(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << "  ";
    }
    cout << endl
         << endl
         << endl;
}

void createRandomFile(string fileName, int size)
{
    ofstream file(fileName);
    for (int i = 0; i < size * 1024 * 1024; i++)
    {
        file << rand() % 10 << " ";
    }
}

void LoadData(string fileName, vector<int> &v)
{
    ifstream file(fileName);
    int value;

    while (file >> value)
    {
        v.push_back(value);
    }

    file.close();
}

main()
{
    vector<int> v(21);


    createRandomFile("dsa.txt", 1024);

    LoadData("dsa.txt", v);

    cout << "Time Before sorting: " << time(0) << endl;

    HeapSort(v);

    cout << "Time After sorting: " << time(0) << endl;

    int x;
    cin >> x;
>>>>>>> 798bd20ff28a7d6f5fb5388ab54f139e0a5dd396
}