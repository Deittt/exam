#include <iostream>

using namespace std;


void find_t(string t) {
    char l = 't';
    int sum = 0;
    for (int i = 0; i < t.size(); i++)
    {
        if (t[i] == l) {
            sum += 1;
        }

    }
    cout << sum << endl;
}

void find_te(string t) {
    char l = 't';
    char k = 'e';
    int sum = 0;
    for (int i = 0; i < t.size(); i++)
    {
        if (t[i] == l) {
            if(t[i+1]!=k)
            sum += 1;
        }

    }
    cout << sum << endl;
}

int main()
{
    string str;
    cin >> str;
    find_t(str);
    find_te(str);
   
    return 0;
}