//-std=c++11 mingw32-gcc-4.8.1
/* ����� ������� ������������ ��������� ����� ��������� �������� ��� ��������.
�����������, ��� ������� �������� ������ ��������������� ����� ����� �� 1000 ������������
� ����� ������ �������� ��������� ��������� ��� �������, � ������� ������� ����� ��������������� ��������� �������.
�������� ��������������� ��������� O(aSize+bSize)
�����������, ��� ������� ������ ����� � ����������.
���� ���� ��������� ������� �� ��������� � ����, ���� ��� ������ ����������� ���������
*/
#include <iostream>
#include <array>
using namespace std;
const int maxnum = 1001;
const int aSize = 6;
const int bSize = 5;
array <int, aSize> A {5, 1, 2, 2, 5, 0};
array <int, bSize> B {2, 0, 1, 2 , 0};
array <int, maxnum> perfHash {0};
int main()
{
for (auto x : A)
    ++perfHash[x];
bool cross = false;
for (auto x : B)
if (perfHash[x] != 0) {
        cout << x << " ";
        perfHash[x] = 0;
        cross = true;
}
if (!cross)
    cout << "����������� �� �������";
    return 0;
}
