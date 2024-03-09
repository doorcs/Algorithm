#include <iostream>
using namespace std;

int main() {
    int H, M;
    cin >> H >> M;

    if(M<45){
        if(!H) H = 24;
        H--;
        M += 15;
    }
    else M -= 45;

    cout << H << ' ' << M;
}

// 
// int main(){
//     int H, M;
//     cin >> H >> M;
//     bool flag = 0;

//     if(M>44) M -= 45;
//     else{
//     	M += 15;
//     	flag = 1;
// 	  }

//     if(flag){
//     	if(!H) H = 23;
// 		else H--;
// 	}

// 	cout << H << ' ' << M;
// }
