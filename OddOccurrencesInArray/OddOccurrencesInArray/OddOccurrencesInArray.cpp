//Task Score
//100 %
//Correctness
//100 %
//Performance
//▶example1
//example test✔OK
//expand allCorrectness tests
//▶simple1
//simple test n = 5✔OK
//▶simple2
//simple test n = 11✔OK
//▶extreme_single_item
//[42]✔OK
//▶small1
//small random test n = 201✔OK
//▶small2
//small random test n = 601✔OK
//expand allPerformance tests
//▶medium1
//medium random test n = 2, 001✔OK
//▶medium2
//medium random test n = 100, 003✔OK
//▶big1
//big random test n = 999, 999, multiple repetitions✔OK
//▶big2
//big random test n = 999, 999✔OK

using namespace std;
#include <iostream>
#include <vector>
#include <algorithm>


int solution(vector<int>& A) {
    sort(A.begin(), A.end());
    for (unsigned int i = 0; i < A.size(); i += 2)
    {
        if (A[i] != A[i + 1])
            return A[i];
    }

    return -1;
}

int main()
{
    vector<int> vect = { 9, 3, 9, 3, 9, 7, 9 };
    cout << solution(vect) << endl;

    vector<int> vect2 = { 1, 9, 3, 9, 3, 9, 9, 4 };
    cout << solution(vect2) << endl;

    vector<int> vect3 = {11, 1000000 ,11, 12, 42};
    cout << solution(vect3) << endl;
}