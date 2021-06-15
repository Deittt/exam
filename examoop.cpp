#include <iostream>
#define CATCH_CONFIG_MAIN
#include "catch.hpp"
using namespace std;


int find_t(string t) {
    char l = 't';
    int sum = 0;
    for (int i = 0; i < t.size(); i++)
    {
        if (t[i] == l) {
            sum += 1;
        }

    }
    cout << sum << endl;
    return sum;
}


int find_te(string t) {
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
    return sum;
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

TEST_CASE("Find te", "[tefind]") {
    string a = "test";
    string b = "ttest";
    string c = "tttt";
    string d = "tetete";
    REQUIRE(find_te(a) == 1);
    REQUIRE(find_te(b) == 2);
    REQUIRE(find_te(c) == 4);
    REQUIRE(find_te(d) == 0);
}

int main()
{
    string str;
    cin >> str;
    find_t(str);
    find_te(str);
   
    return 0;
}
//new branch test