#ifndef ITER_H
#define ITER_H
template<typename T>
void iter(T *Begin, int len, void (*functor)(T const &)) {
    if (len <= 0) return;
    for (int i = 0 ; i < len ; ++i) functor(Begin[i]);
};
template<typename T>
void iter(T *Begin, int len, void (*functor)(T &)) {
    if (len <= 0) return;
    for (int i = 0 ; i < len ; ++i) functor(Begin[i]);
};
#endif
