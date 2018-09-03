using namespace std;
#include <iostream>
main(){
    int n;
    cin >> n;
    int p[n+1],w[n+1],LIS[n+1];
    int LISMAX=0,LISMAX_II=0,LISTEM[n+1],LISTEM_II[n+1];
    
    for(int i=1;i<=n;i++)cin >> p[i];
    for(int i=1;i<=n;i++)cin >> w[i];
    w[0]=0,p[0]=0;
    for(int i=0;i<=n;i++){
        LISTEM[i] = w[i];
        LISTEM_II[i] = w[i];
        if( i==1 ){
        
        LISMAX_II = LISTEM_II[1];
        }
        for(int j=0;j<i;j++){
                if(LISTEM_II[j] > LISMAX_II){
                    LISMAX_II = LISTEM_II[j];
                    LISTEM_II[i] = LISMAX_II;
                }
                if(LISTEM[j] > LISMAX){
                    LISMAX = LISTEM[j];
                    LISTEM[i] = LISMAX;
                }
                if(p[j] < p[i] && w[i] + LISTEM[j] >= LISMAX){
                    LISMAX = w[i] + LISTEM[j];
                    LISTEM[i] = LISMAX;
                }
              
                if(p[j] > p[i] && w[i] + LISTEM_II[j] >= LISMAX_II){
                    LISMAX_II = w[i] + LISTEM_II[j];
                    LISTEM_II[i] = LISMAX_II;
                }
        }
        
    }
     cout << LISMAX << endl << LISMAX_II;
    
}

