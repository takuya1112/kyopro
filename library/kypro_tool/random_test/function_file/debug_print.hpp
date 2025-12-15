#pragma once
#include <bits/stdc++.h>
using namespace std;

// tuple
template<class Tuple, size_t... I>
void print_tuple_impl(ostream& s, const Tuple& t, index_sequence<I...>) {
    ((s << (I ? " " : "\n") << get<I>(t)), ...);
}

template<class... Ts>
ostream& operator << (ostream& s, const tuple<Ts...>& P) {
    print_tuple_impl(s, P, index_sequence_for<Ts...>{});
    return s;
}

// pair
template<class T1, class T2> ostream& operator << (ostream& s, const pair<T1,T2>& P)
{ return s << '<' << P.first << ", " << P.second << '>'; }

// array
template<class T> ostream& operator << (ostream& s, const array<T, 2>& P)
{ return s << '<' << P[0] << ", " << P[1] << '>'; }
template<class T> ostream& operator << (ostream& s, const array<T, 3>& P)
{ return s << '<' << P[0] << ", " << P[1] << ", " << P[2] << '>'; }
template<class T> ostream& operator << (ostream& s, const array<T, 4>& P)
{ return s << '<' << P[0] << ", " << P[1] << ", " << P[2] << ", " << P[3] << '>'; }

// vector
template<class T> ostream& operator << (ostream& s, const vector<T>& P)
{ for (int i = 0; i < P.size(); ++i) { if (i > 0) { s << " "; } s << P[i]; } return s; }
template<class T> ostream& operator << (ostream& s, const vector<vector<T> >& P)
{ for (int i = 0; i < P.size(); ++i) { s << "\n" << P[i]; } return s; }

// deque
template<class T> ostream& operator << (ostream& s, const deque<T>& P)
{ for (int i = 0; i < P.size(); ++i) { if (i > 0) { s << " "; } s << P[i]; } return s; }

// set
template<class T> ostream& operator << (ostream& s, const set<T>& P)
{ for (auto it : P) { s << "<" << it << "> "; } return s; }
template<class T> ostream& operator << (ostream& s, const multiset<T>& P)
{ for (auto it : P) { s << "<" << it << "> "; } return s; }
template<class T> ostream& operator << (ostream& s, const unordered_set<T>& P)
{ for (auto it : P) { s << "<" << it << "> "; } return s; }

// map
template<class T1, class T2> ostream& operator << (ostream& s, const map<T1,T2>& P)
{ for (auto it : P) { s << "<" << it.first << "->" << it.second << "> "; } return s; }
template<class T1, class T2> ostream& operator << (ostream& s, const unordered_map<T1,T2>& P)
{ for (auto it : P) { s << "<" << it.first << "->" << it.second << "> "; } return s; }
