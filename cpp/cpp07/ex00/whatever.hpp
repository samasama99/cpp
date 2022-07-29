#ifndef WHATEVER_H
#define WHATEVER_H
template<typename T>
void swap(T &lh, T &rh) {
  T tmp = lh;
  lh = rh;
  rh = tmp;
};

template<typename T>
T min(T &lh, T &rh) {
  return lh < rh ? lh : rh;
};

template<typename T>
T max(T &lh, T &rh) {
  return lh > rh ? lh : rh;
};
#endif
