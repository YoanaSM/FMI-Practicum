#include<iostream>
int main()
{
    int n1, n2, n3, n4, n5;
    std :: cin >> n1>> n2 >> n3 >> n4 >> n5;

    bool isInA = ( n5 >= n1 && n5 <= n2);
    bool isInB = (n5 >= n3 && n5 <= n4);

    bool isInUnion = isInA || isInB;
    bool isInIntersect = isInA && isInB;
    bool isInDiff = isInA && !isInB;

    bool onlyInOne = isInUnion && !isInIntersect;

    std :: cout << "Is in the union: " << std :: boolalpha << isInUnion << "\n";
    std :: cout << "Is in the intersection: " << std :: boolalpha << isInIntersect << "\n";
    std :: cout << "Is in the difference: " << isInDiff << std :: boolalpha << "\n";
    std :: cout << "Is only in one of the sets: " << std :: boolalpha<< onlyInOne << "\n";
    

    return 0;
}