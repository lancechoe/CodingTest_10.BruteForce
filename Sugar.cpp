/*
문제
Mirko works in a sugar factory as a delivery boy. He has just received an order: he has to deliver exactly N kilograms of sugar to a candy store on the Adriatic coast. Mirko can use two types of packages, the ones that contain 3 kilograms, and the ones with 5 kilograms of sugar.

Mirko would like to take as few packages as possible. For example, if he has to deliver 18 kilograms of sugar, he could use six 3-kilogram packages. But, it would be better to use three 5-kilogram packages, and one 3-kilogram package, resulting in the total of four packages.

Help Mirko by finding the minimum number of packages required to transport exactly N kilograms of sugar.

입력
The first and only line of input contains one integer N (3 ≤ N ≤ 5000).

출력
The first and only line of output should contain the minimum number of packages Mirko has to use. If it is impossible to deliver exactly N kilograms, output -1.
*/

#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;

    int count = 0;
    while (N >= 0) {
        if (N % 5 == 0) {  // 5로 나누어 떨어지면 최적의 경우
            count += N / 5;
            cout << count << endl;
            return 0;
        }
        N -= 3; // 5로 나누어 떨어지지 않으면 3kg 봉지를 하나 추가
        count++;
    }

    cout << -1 << endl; // 정확히 Nkg을 만들 수 없는 경우
    return 0;
}
