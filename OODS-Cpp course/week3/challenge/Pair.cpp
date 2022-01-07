#include "Pair.h"

Pair::Pair(int a, int b) {
    pa = new int(a);
    pb = new int(b);
}

Pair::Pair(const Pair & other) {
    pa = new int(*(other.pa));
    pb = new int(*(other.pb));
}

Pair::~Pair() {
    delete pa;
    delete pb;
}