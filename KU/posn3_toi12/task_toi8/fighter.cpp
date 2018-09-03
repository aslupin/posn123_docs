using namespace std;
#include <iostream>
int hp_even,hp_odd,temp_input;

int atk(int temp_input,int atk_even,int atk_odd){
    if(temp_input%2 != 0){
            if(atk_odd > 1) atk_odd = 1;
            
            if(atk_even < 3){
                hp_odd--;
            }
            else{
                hp_odd -= 3;
            }
            atk_even++;
        }
        else{
            if(atk_even > 1) atk_even = 1;
            
            if(atk_odd < 3){
                hp_even--;
            }
            else{
                hp_even -= 3;
            }
            atk_odd++;
        }
}

main(){
    int hp;
    int lastshot,twine = 2;
    cin >> hp;
    hp_even = hp;
    hp_odd = hp_even;
    int atk_even = 1;
    int atk_odd = 1;
    for(int i=0;i < 2*hp;i++){
        
        cin >> temp_input;
        if(twine == 2){
        atk(temp_input,atk_even,atk_odd);
        
        if(hp_odd <= 0){
            lastshot = temp_input;
            twine = 1;
            
        }
        else if(hp_even <= 0){
            lastshot = temp_input;
            twine = 0;
            
        }}
    }
    cout << twine << endl << lastshot;
    
    
}
