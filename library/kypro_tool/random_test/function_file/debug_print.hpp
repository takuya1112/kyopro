#pragma once
#include <bits/stdc++.h>
using namespace std;

template<class T1, class T2> ostream& operator << (ostream &s, const pair<T1,T2>& P)
{ return s << '<' << P.first << ", " << P.second << '>'; }

template<class T> ostream& operator << (ostream &s, const vector<T>& P)
{ for (int i = 0; i < P.size(); ++i) { if (i > 0) { s << " "; } s << P[i]; } return s; }
template<class T> ostream& operator << (ostream &s, const vector<vector<T> >& P)
{ for (int i = 0; i < P.size(); ++i) { s << endl << P[i]; } return s << endl; }

template<class T> ostream& operator << (ostream &s, const deque<T>& P)
{ for (int i = 0; i < P.size(); ++i) { if (i > 0) { s << " "; } s << P[i]; } return s; }


template<class T> ostream& operator << (ostream &s, const array<T, 2>& P)
{ return s << '<' << P[0] << ", " << P[1] << '>'; }
template<class T> ostream& operator << (ostream &s, const array<T, 3>& P)
{ return s << '<' << P[0] << ", " << P[1] << ", " << P[2] << '>'; }
template<class T> ostream& operator << (ostream &s, const array<T, 4>& P)
{ return s << '<' << P[0] << ", " << P[1] << ", " << P[2] << ", " << P[3] << '>'; }

template<class T> ostream& operator << (ostream &s, const set<T>& P)
{ for (auto it : P) { s << "<" << it << "> "; } return s; }
template<class T> ostream& operator << (ostream &s, const multiset<T>& P)
{ for (auto it : P) { s << "<" << it << "> "; } return s; }
template<class T> ostream& operator << (ostream &s, const unordered_set<T>& P)
{ for (auto it : P) { s << "<" << it << "> "; } return s; }

template<class T1, class T2> ostream& operator << (ostream &s, const map<T1,T2>& P)
{ for (auto it : P) { s << "<" << it.first << "->" << it.second << "> "; } return s; }
template<class T1, class T2> ostream& operator << (ostream &s, const unordered_map<T1,T2>& P)
{ for (auto it : P) { s << "<" << it.first << "->" << it.second << "> "; } return s; }

template <class... T> ostream& operator << (ostream &s, const tuple<T...>& P) 
{ apply([&s](auto&&... args) { int i = 0; (( s << (i ++ ? "\n" : "") << args), ...);}, P); return s; }

template<class T>
concept HasTie = requires(const T& t) { { t.tie() }; };

template <HasTie T> ostream& operator << (ostream &s, const T& t) 
{ return s << t.tie(); }