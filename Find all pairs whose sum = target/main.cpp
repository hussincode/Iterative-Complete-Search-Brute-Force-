#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v = {1, 3, 2, 4, 5};

    int t = 0;
    cin >> t;

    for(int i = 0; i < v.size(); i++){
        for(int j = i+1; j < v.size(); j++){

            int sum = v[i] + v[j];

            if(sum == t){

                cout << "(" << v[i] << "," << v[j] << ")";

            }

        }

    }


    return 0;
}
