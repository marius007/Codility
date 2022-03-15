//Correctness
//
//100 %
//
//Performance
//
//100 %
//
//Example test cases
//
//Passed 3 out of 3
//
//Correctness test cases
//
//Passed 5 out of 5
//
//Performance test cases
//
//Passed 4 out of 4

using namespace std;
#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

int solution(vector<int>& A) {

    set<int> s(A.begin(), A.end());

    int last = *s.rbegin();
    for (int i = 1; i <= last + 1 ; i++)
    {
         if (s.find(i) == s.end())
        {
            return i;
        }
    }

    return 1;
}

int main()
{
    vector<int> v1{ 1, 3, 6, 4, 1, 2 };
    vector<int> v2{ 1, 2, 3 };
    vector<int> v3{ -1, -3 };

    cout << solution(v1) << "\n";
    cout << solution(v2) << "\n";
    cout << solution(v3) << "\n";
}

