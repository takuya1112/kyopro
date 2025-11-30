// a / b の切り捨てを返す
// b < 0 の場合は-a, -bの値を入れる

#pragma once
template<class T>
T floor(T a, T b) {
    if (a % b == 0 || a >= 0)  return a / b;
    else return -((-a + b - 1) / b);
}