#include <iostream>
#include <algorithm>
#include <cstdlib>
using namespace std;

const int LG = 100;

int lgSatellite;
int nbLigs, nbCols;

bool estMaison[LG][LG];

struct Pos {
    int lig, col;  
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    srand(42);
    
    cin >> lgSatellite;
    cin >> nbLigs >> nbCols;
    
    for(int lig = 0; lig < nbLigs; lig ++) {
        for(int col = 0; col < nbCols; col ++) {
            cin >> estMaison[lig][col];
        }
    }
    
    vector<Pos> poss;
    for(int lig = 0; lig < nbLigs; lig ++)
        for(int col = 0; col < nbCols; col ++)
            poss.push_back({lig, col});
    
}
