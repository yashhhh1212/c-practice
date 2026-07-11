#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
         int ans = 0;
        int place=1;
    while(n>0){
        int digit = n%10;//last digit dega hume ye 30201 dedia isne
        if(digit==0){
digit = 5;//35251 agaya 
        }
        n=n/10;//last digit udhadeega 3525 352 35 3 0
         ans = ans+digit*place; // 0 +3*10=3 3+5*100=53 53+2*1000=5352 535*1000=5352 5352*10000=53525 53525*100000=535251
 place = place*10; //wapas laega

        }
        cout << ans;
return 0;
    }