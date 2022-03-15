//Codility score: 100%
//
//▶example
//first example test✔OK
//▶example2
//second example test✔OK
//▶example3
//third example test✔OK
//expand allCorrectness tests
//▶extreme_empty
//empty array✔OK
//▶single
//one element, 0 <= K <= 5✔OK
//▶double
//two elements, K <= N✔OK
//▶small1
//small functional tests, K < N✔OK
//▶small2
//small functional tests, K >= N✔OK
//▶small_random_all_rotations
//small random sequence, all rotations, N = 15✔OK
//▶medium_random
//medium random sequence, N = 100✔OK
//▶maximal
//maximal Nand K✔OK

using namespace std;
#include <iostream>
#include <vector>

vector<int> rotate(vector<int>& A) {
    int last = A.size() - 1;
    A.insert(A.begin(), A[last]);
    A.pop_back();
    return A;
}

vector<int> solution(vector<int>& A, int K) {

    if (!A.empty())
    {
        for (int i = 0; i < K; i++)
        {
            A = rotate(A);
        }
    }

    return A;
}

int main()
{
    vector<int> vect{ 1, 2, 3, 4};
    vect = solution(vect,3);
    for (int x : vect)
        cout << x << " ";
}


