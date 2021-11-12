#include "std_lib_facilities.h"

int main()
try {
    cout << "Success!\n";
    cout << "Success!\n";
    cout << "Success" << "!\n";
    cout << "Success!" << '\n';
    int res = 7; vector<int> f(10); f[5] = res; cout << "Success!\n";
    vector<int> v(10); v[5] = 7; if (v[5] == 7) cout << "Success!\n";
    if (true) cout << "Success!\n"; else cout << "Fail!\n";
    bool c = false; if (!c) cout << "Success!\n"; else cout << "Fail!\n";
    string a = "ape"; bool g = "fool" > a; if (c) cout << "Success!\n";
    string b = "ape"; if (b != "fool") cout << "Success!\n";
    string d = "ape"; if (d != "fool") cout << "Success!\n";
    string e = "ape"; if ("fool") cout << "Success!\n";
    vector<char> l(1); for (int i=0; i<l.size(); ++i) cout << "Success!\n";
    vector<char> n(5); for (int i=4; i<n.size(); ++i) cout << "Success!\n";
    string s = "Success!\n"; for (int i=0; i<10; ++i) cout << s[i];
    if (true) cout << "Success!\n"; else cout << "Fail!\n";
    int x = 2000; int y = x; if (y==2000) cout << "Success!\n";
    string t = "Success!\n"; for (int i=0; i<10; ++i) cout << t[i];
    vector<int> p(0); for (int i=0; i<=p.size(); ++i) cout << "Success!\n";
    int i=0; int j=9; while (i<10) ++i; if (j<i) cout << "Success!\n";
    int z = 2; double r = 5/(z/2); if (r==2*(z+0.5)) cout << "Success!\n";
    string u = "Success!\n"; for (int i=0; i<10; ++i) cout << u[i];
    int k = 0; while (k<10) ++k; if (i) cout << "Success!\n";
    int o = 4; double m = 5.0/(o-2); if (m==2+0.5) cout << "Success!\n";
    cout << "Success!\n";

    return 0;
}
catch (exception& e) {
    cerr << "error: " << e.what() << '\n';
    return 1;
}
catch (...) {
    cerr << "Oops: unknown exception!\n";
    return 2;
}
