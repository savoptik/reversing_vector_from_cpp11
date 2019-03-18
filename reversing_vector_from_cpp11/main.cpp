//
//  main.cpp
//  reversing_vector_from_cpp11
//
//  Created by Артём Семёнов on 18/03/2019.
//  Copyright © 2019 Артём Семёнов. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, const char * argv[]) {
    vector<int> v;
    for (int i = 0; i < 10; i++) v.push_back(i);
    reverse(v.begin(), v.end());
    for (auto x : v) cout << x << " ";
    cout << endl;
    return 0;
}
