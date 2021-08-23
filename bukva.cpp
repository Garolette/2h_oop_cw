#include "bukva.h"
int bukva :: usl(string a) {
    int s=a.size();
    int q=0;
    for (int i=0; i<s; i++) {
        if (a[i]=='?') q++;
    }
    return q;
}
