//n!/(k!(n-k)!)
//------Divnumikos Syntelestis/Interdisciplinary factor
//icsd14027 Alexandros Galanis
#include <iostream>


using namespace std;

int synartisi(int n, int k){

    if(k == 0 || k == n){
        return 1;
    }

    return synartisi(n - 1, k - 1) + synartisi(n - 1, k);
}

int main(){
    int n, k, z;

    do{
        cout<<"Dwse n kai k me n > k"<<endl;
        cin>>n>>k;
    }while(n < k);

    cout<<synartisi(n, k);

    return 0;
}
