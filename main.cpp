//-std=c++11 mingw32-gcc-4.8.1
/* Будем считать пересечением множество общих элементов массивов без повторов.
Предположим, что массивы содержат только неотрицательные целые числа до 1000 включительно
В таком случае возможно построить идеальную хеш таблицу, в которой индексы будут соответствовать значениям массива.
Итоговая алгоритмическая сложность O(aSize+bSize)
Предполагаю, что вводить массив проще в исходниках.
Если ваша трактовка условий не совпадает с моей, буду рад внести необходимые изменения
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
    cout << "Пересечений не найдено";
    return 0;
}
