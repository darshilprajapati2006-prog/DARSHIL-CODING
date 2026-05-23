/*The Demon Slayer Corps is marching through a cursed valley divided into N consecutive sectors.

Each sector i has a demon aura intensity a[i].

Tanjiro's squad covers exactly K consecutive sectors per formation window.

The aura burden of a window is the sum of intensities of all K sectors in it.

The Corps can station at most M Hashira, one per sector.

Each Hashira uses their breathing technique to suppress that sector's aura by exactly B units.

Each sector can hold at most one Hashira.

Constraint: Every sector's aura satisfies a[i] ≥ B — no sector has weaker aura than a single Hashira's power. A Hashira always reduces a sector by exactly B (no clamping).

Find the minimum possible maximum aura burden over all windows of size K, after placing Hashira optimally.*/
#include <cmath>
#include <cstdio>
#include <vector>   
#include <iostream>
#include <algorithm>
using namespace std;  

int main() {
    int n,m,k,b;
    cin>>n>>m>>k>>b;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    return 0;
}