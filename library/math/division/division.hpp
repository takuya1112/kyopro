// 数学的に正しい切り上げと切り捨て

#pragma once
template<typename T> T floor_div(T a, T b) {
    if (b < 0) a = -a, b = -b;
    if (a >= 0) return a / b;
    else return -((-a) / b) - 1;
}

template<typename T> T ceil_div(T a, T b) {
    return -floor_div(-a, b);
}