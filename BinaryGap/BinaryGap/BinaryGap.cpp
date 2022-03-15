// Codility score : 100%

//▶example1
//example test n = 1041 = 10000010001_2✔OK
//▶example2
//example test n = 15 = 1111_2✔OK
//▶example3
//example test n = 32 = 100000_2✔OK
//expand allCorrectness tests
//▶extremes
//n = 1, n = 5 = 101_2 and n = 2147483647 = 2 * *31 - 1✔OK
//▶trailing_zeroes
//n = 6 = 110_2 and n = 328 = 101001000_2✔OK
//▶power_of_2
//n = 5 = 101_2, n = 16 = 2 * *4 and n = 1024 = 2 * *10✔OK
//▶simple1
//n = 9 = 1001_2 and n = 11 = 1011_2✔OK
//▶simple2
//n = 19 = 10011 and n = 42 = 101010_2✔OK
//▶simple3
//n = 1162 = 10010001010_2 and n = 5 = 101_2✔OK
//▶medium1
//n = 51712 = 110010100000000_2 and n = 20 = 10100_2✔OK
//▶medium2
//n = 561892 = 10001001001011100100_2 and n = 9 = 1001_2✔OK
//▶medium3
//n = 66561 = 10000010000000001_2✔OK
//▶large1
//n = 6291457 = 11000000000000000000001_2✔OK
//▶large2
//n = 74901729 = 100011101101110100011100001✔OK
//▶large3
//n = 805306373 = 110000000000000000000000000101_2✔OK
//▶large4
//n = 1376796946 = 1010010000100000100000100010010_2✔OK
//▶large5
//n = 1073741825 = 1000000000000000000000000000001_2✔OK
//▶large6
//n = 1610612737 = 1100000000000000000000000000001_2✔OK


using namespace std;
#include <iostream>

int bit(int n, int k)
{
    return (n & (1 << k)) >> k;
}

int solution(int N) {
    int gap = 0;
    bool start = false;
    int count = 0;

    for (int i = (sizeof(int) * 8) - 1; i >= 0; i--)
    {
        if (start == true)
        {
            if (bit(N, i) == 1)
            {
                if (count > gap)
                {
                    gap = count;
                }
                count = 0;
            }
            else
            {
                count++;
            }
        }
        else
        {
            if (bit(N, i) == 1)
            {
                start = true;
                count = 0;
            }
        }
    }

    return gap;
}

int main()
{
    int number = 561892;

    for (int i = (sizeof(int) * 8) - 1; i >= 0; i--)
    {
        cout << bit(number, i);
    }
    cout << endl << solution(number);
}
