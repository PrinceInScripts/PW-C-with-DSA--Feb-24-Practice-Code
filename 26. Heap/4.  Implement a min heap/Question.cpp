#include<iostream>
using namespace std;
class MinHeap{
public:
     int arr[50];
     int idx;
     MinHeap(){
        idx=1;
     }

     int top(){
        return arr[1];
     }

     void push(int x){
         arr[idx]=x;
         int i=idx;
         idx++;
         while(i!=1){
            if(arr[i]<arr[i/2]){
                swap(arr[i],arr[i/2]);
            } else break;
            i=i/2;
         }
     }
     int size(){
        return idx-1;
     }
     void pop(){
        idx--;
        arr[1]=arr[idx];        
        int i=1;
        
        while(1){
            int l=i*2,r=i*2+1;
            if(l>idx-1) break;
            if(r>idx-1){
                if(arr[l]<arr[i]){
                swap(arr[i],arr[l]);
                i=l;
               }
               break;
            }

            if(arr[l]<arr[r]){
               if(arr[l]<arr[i]){
                swap(arr[i],arr[l]);
                i=l;
               } else break;
            }
            else{
               if(arr[l]<arr[i]){
                 swap(arr[i],arr[r]);
                 i=r;
               } else break;
                 
            }
        }
     }

     void display(){
        for(int i=1;i<idx;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
     }
};
int main(){
      MinHeap pq;
      pq.push(10);
      pq.push(22);
      cout<<pq.size()<<endl;
      pq.push(11);
      cout<<pq.top()<<endl;
      pq.display();
      pq.pop();
      pq.display();


}