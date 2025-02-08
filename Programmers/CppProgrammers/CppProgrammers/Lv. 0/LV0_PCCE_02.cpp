//
//  LV0_PCCE_02.cpp
//  CppProgrammers
//
//  Created by Mk on 2/8/25.
//

#include "LV0_PCCE_02.hpp"
#include <iostream>

using namespace std;

static int solution() {
    int angle1;
    int angle2;
    cin >> angle1 >> angle2;
    
    int sum_angle = (angle1 + angle2) % 360;
    cout << sum_angle << endl;
    return 0;
}

void Lv0_PCCE_02() {
    solution();
}
