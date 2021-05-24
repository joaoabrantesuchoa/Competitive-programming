#include <bits/stdc++.h>

using namespace std;

int arr[4];

void setIO(string s) { // the argument is the filename without the extension

	freopen((s+".in").c_str(),"r",stdin);

	freopen((s+".out").c_str(),"w",stdout);

}

int main() {
    setIO("paint");
    scanf("%d%d%d%d", &arr[0], &arr[1], &arr[2], &arr[3]);

    sort(arr, arr + 4);

    printf("%d\n", arr[3] - arr[0]);
    return 0;
}
