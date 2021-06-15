#include <iostream>
#define CATCH_CONFIG_MAIN
#include "catch.hpp"
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

TEST_CASE("Find t", "[tfind]") {
    string a="test";
    string b = "ttest";
    string c = "tttt";
    string d = "tetete";
    REQUIRE(find_t(a) == 2);
    REQUIRE(find_t(b) == 3);  
    REQUIRE(find_t(c) == 4);
    REQUIRE(find_t(d) == 3);
}

/*int main()
{
    string str;
    cin >> str;
    find_t(str);
    find_te(str);
   
    return 0;
}*/