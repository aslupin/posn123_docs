using namespace std;
#include <iostream>
#include <cstdlib>
int hight = 0,hi = 0;
typedef struct tree{
    
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

void Insert(int input){
        if(root->data == 9999990){//first element
            
            root->data = input;
            temp = root;
            
        }
        else {//other element
                node *newnode = (node*)malloc(sizeof(node));
                newnode->data = input;
                
                temp = &dummy;
                temp_be = NULL;
                hi = 0;
                while(1){
                    if(input <= temp->data){//left
                        temp_be = temp;
                        temp = temp->pL;
                    hi++;
                    }
                    else{//right
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
int search_num(node *cpy_node,int nl,int nh){
    if
    }

    
main(){
    int n,input;
    cin >> n;
    root = &dummy;
    for(int i=0;i<n;i++){
        cin >> input;
        Insert(input);
    }
   // cout << hight << endl;
    cin >> n;
    int nl[n],nh[n];
    for(int i=0;i<n;i++){
        cin >> nl[i] >> nh[i];
    }
    search_num(root,nl[0],nh[0]);
    /*
    for(int i=0;i<n;i++){
        search_num(root,nl[i],nh[i]);
    }
    */
    //cout << min_ch(root) << endl << max_ch(root) << endl;
    //inorder_tra(root);
    
    
    
    

}
