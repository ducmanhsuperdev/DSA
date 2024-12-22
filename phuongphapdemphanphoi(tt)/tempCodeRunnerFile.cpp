if (dem.find(x) != dem.end()) {
    res += dem[x.first] *  (dem[x.first] - 1 ) / 2; 
}