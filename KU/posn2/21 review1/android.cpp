using namespace std;
#include <iostream>
#include <list>
#include <vector>
#include <queue>
#include <algorithm>
main(){
   
    int p,s,m;
    int temp;
    cin >> p >> s >> m;
    vector<int> m_pg;
    queue<int> order_pg;
    list<int> logHis;
    for(int i=0;i<p+s;i++){
        cin >> temp;
        if(i<p){
            m_pg.push_back(temp);
        }
        else if(i>=p){
            order_pg.push(temp);
        }
    }
    
    int memN=0;
    while(!order_pg.empty()){
            
            int frontQ = order_pg.front();
            
            //logHis.remove(frontQ-1);
            //logHis.push_back(frontQ-1);
            int checkmax = memN+m_pg[frontQ-1];
            //cout << m_pg[frontQ-1] << " " << frontQ-1 << endl;
            list<int>::iterator itr = find(logHis.begin(),logHis.end(),frontQ-1);
            if(itr == logHis.end()){
            while(checkmax > m){
                //cout << "checkmax : " << checkmax << endl;
                int o = logHis.front();
               
                //cout << "o : " << o << endl;
                memN -= m_pg[o];
                //cout << "memN : " << memN << endl << "m_pg[" << o <<"] : " << m_pg[o] <<  endl;
                logHis.pop_front();
                checkmax = memN+m_pg[frontQ-1];
          
            }
            
            logHis.remove(frontQ-1);
            logHis.push_back(frontQ-1);
         
            memN += m_pg[frontQ-1];
            }
            else{
                
                logHis.remove(frontQ-1);
                logHis.push_back(frontQ-1);
                
            }
               order_pg.pop();
    }
    cout << m-memN;
    
}
