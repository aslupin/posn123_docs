using namespace std;
#include <iostream>
#include <cstdlib>
int hight = 0,hi = 0;
typedef struct tree{
    int X;
    int Y;
    int most;
    int key;
    int data = 9999990;
   
 
     struct tree *pparent = NULL;
     struct tree *pR = NULL;
     struct tree *pL = NULL;
}node;

node *root;
node dummy;
node *temp = NULL;
node *temp_be = NULL;

void Insert(int input,int inputtwo){
        if(root->data == 9999990){//first element
            
            root->data = input;
            //root->X = root->data;
           // root->Y = inputtwo;
           // root->most = inputtwo;
            temp = root;
            
        }
        else {//other element
                node *newnode = (node*)malloc(sizeof(node));
               
                newnode->data = input;
                //newnode->X = newnode->data;
               // newnode->Y = inputtwo;
              //  newnode->most = inputtwo;
                temp = &dummy;
                temp_be = NULL;
                hi = 0;
                while(1){
                    if(input <= temp->data){//left
                            
                           // if(temp->most < newnode->most)temp->most=newnode->most;
                            
                        temp_be = temp;
                        temp = temp->pL;
                    hi++;
                    }
                    else{//right
                        
                       // if(temp->most < newnode->most)temp->most=newnode->most;
                        
                        temp_be = temp;
                        temp = temp->pR;
                    hi++;
                    }
                    
                    
                    
                    
                    if(temp == NULL) break;
                }
                
                if(input <= temp_be->data)temp_be->pL = newnode;
                else temp_be->pR = newnode;
                newnode->pparent = temp_be;
         
        }
        if(hi > hight)
        hight = hi;
    }
    
void inorder_tra(node *cpy_node){
    if(cpy_node != NULL){
        inorder_tra(cpy_node->pL);
        cout << cpy_node->data << " ";
        inorder_tra(cpy_node->pR);
        
    }
    }
    
int min_ch(node *cpy_node){
    if(cpy_node->pL == NULL){
        return cpy_node->data;
    }
    else min_ch(cpy_node->pL);
}

int max_ch(node *cpy_node){
    if(cpy_node->pR == NULL){
        return cpy_node->data;
    }
    else max_ch(cpy_node->pR);
}
    
    
    
main(){
    int n,input,inputtwo;
    cin >> n;
    root = &dummy;
    for(int i=0;i<n;i++){
        cin >> input;
        cin >> inputtwo;
        Insert(input,inputtwo);
        //cout << "hi_1";
    }
    
    
    

}
