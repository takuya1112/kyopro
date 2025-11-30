// chmax(a, b) の形で使用し変数aにaとbのmaxをとる

#pragma once
template<class T> 
inline bool chmax(T &a, T b) { 
    if (a < b) {
        a = b;
        return true;
    }
    return false;
}