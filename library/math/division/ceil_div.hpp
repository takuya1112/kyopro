// a / b の切り上げを返す
// b < 0 の場合は-a, -bの値を入れる

#pragma once
template<class T> 
T ceil(T a, T b) {
    if (a % b == 0 || a >= 0)  return (a + b - 1) / b;
    else return -((-a) / b); 
}