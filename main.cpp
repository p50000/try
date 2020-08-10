#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
    double x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    double s1 = sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1));
    double s2 = sqrt((x2 - x3)*(x2 - x3) + (y2 - y3)*(y2 - y3));
    double s3 = sqrt((x3 - x1)*(x3 - x1) + (y3 - y1)*(y3 - y1));
    if(s1 + s2 <= s3 || s1 + s3 <= s2 || s2 + s3 <= s1){
        cout << "this triangle does not exist";
    }
    cout << abs(x1 * y2 - y1 * x2 + x2 * y3 - x3 * y2 + x3 * y1 - x1 * y3)/2;
    return 0;
}
