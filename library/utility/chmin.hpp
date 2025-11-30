// chmin(a, b) の形で使用し変数aにaとbのminをとる

#pragma once
template<class T> 
inline bool chmin(T &a, T b) { 
    if (a > b) {
        a = b;
        return true;
    }
    return false;
}