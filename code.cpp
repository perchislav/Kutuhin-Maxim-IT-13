//c++
#include <iostream>
#include <ctime>

using namespace std;
int main(){
    srand(time(0));
    int c,b,k;
    k=0;
    c=rand()%100+1;



    while(c!=b) {


        cout<<" Vvedite chislo ";
        cin>>b;


        if (c == b) {
            cout << " vi ugadali "; cout <<k<<" kolichestvo popitok";
        }
        if (c < b) {
            cout << " chislo menshe";
            k=k+1;
        }
        if (c > b) {
            cout << " chislo bolshe";
            k=k+1;
        }
    }
}
