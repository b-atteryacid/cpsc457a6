bool announce(struct vine* v, struct baboon* b) {
    if(v->wantDirsLen >= v->maxWantDirs) {
        return false;
    }

    wantDirs[wantDirsLen] = b->dir;
    wantDirsLen++;
}
