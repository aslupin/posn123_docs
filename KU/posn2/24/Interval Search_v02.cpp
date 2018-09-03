namespace std;
#include <iostream>
#include <cstdlib>
#define INF 999999
int hight = 0,hi = 0,NAns=0;
typedef struct tree{
    int X;
    int Y;
    int most;
    int data = INF;
     struct tree *pparent = NULL;
     struct tree *pR = NULL;
     struct tree *pL = NULL;
}node;

node *root;
node dummy;
node *temp = NULL;
node *temp_be = NULL;

void Insert(int input,int inputtwo){
        if(root->data == INF){//first element
            
            root->data = input;
            root->X = root->data;
            root->Y = inputtwo;
            root->most = inputtwo;
            temp = root;
            
        }
        else {//other element
                node *newnode = (node*)malloc(sizeof(node));
               
                newnode->data = input;
                newnode->X = newnode->data;
                newnode->Y = inputtwo;
                newnode->most = inputtwo;
                temp = &dummy;
                temp_be = NULL;
                hi = 0;
                while(1){
                    if(input <= temp->data){//left
                            
                            if(temp->most < newnode->most)temp->most=newnode->most;
                            
                        temp_be = temp;
                        temp = temp->pL;
                    hi++;
                    }
                    else{//right
                        
                        if(temp->most < newnode->most)temp->most=newnode->most;
                        
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

int intersects(node* temp,int nl,int nh){
    int begii = temp->X;
    int endii = temp->Y;
    int coutn=0;
    for(begii = temp->X;begii <= endii;begii++){
        
    }
    
}
// temp->X < nh && temp->Y >= nl
int findN(int nl,int nh,node* temp){
//temp = &dummy;
while (temp != NULL){
        
if (temp->X < nh && temp->Y >= nl){
        NAns++;
       // cout << "1";
       // return findN(nl,nh,temp);
        break;
        }
else if (temp->pL == NULL) {temp = temp->pR; /*cout << "2";*/}
else if (temp->most < nl) {temp = temp->pR; /*cout << "3";*/}
else {temp = temp->pL;/* cout << "4";*/}

}
return 0;
    }

    
main(){
   // cout << sizeof(node) << endl;
    int w,n,input,inputtwo;
    cin >> n;
    root = &dummy;
    for(int i=0;i<n;i++){
        cin >> input;
        cin >> inputtwo;
        Insert(input,inputtwo);
    }
    cin >> w;
    
    int inO[w],inT[w];
    for(int i=0;i<w;i++){
        
        cin >> inO[i] >> inT[i];
        
    }
    for(int i=0;i<w;i++){
        
        findN(inO[i],inT[i],root);
        NAns=0;
        
    }
    cout << root->most;
    
    

}

/*
4
2 4
3 6
1 3
7 9
2
1 5
6 10
*/
