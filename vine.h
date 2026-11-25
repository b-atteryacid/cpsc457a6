#include "baboon.h"

struct vine {

    int capacity;
    int baboons;
    bool dir;
    bool changing;
    bool secure;

    bool *wantDirs;
    int wantDirsLen;

    int maxWantDirs;

};


bool mount(struct vine* v, struct baboon* b);
bool dismount(struct vine* v, struct baboon* b);
bool announce(struct vine* v, struct baboon* b);
