#include<iostream>
#include<vector>
#include<queue>
using namespace std;
#define vi vector<double>
// priority queue declared globally because it is used in INSERT and FIND MEDIAN function.
priority_queue<int,vi> pqmax;
priority_queue<int,vi,greater<int> > pqmin;


// INSERT FUNCTION.
void insert(int x){
if (pqmax.size() == 0) {
            pqmax.push(x);
            return;
        } 
        if (x <= pqmax.top()) {
            pqmax.push(x);
        } else {
            pqmin.push(x);
        }
        int firstSize = pqmax.size();
        int secondSize = pqmin.size();
        if (firstSize > secondSize+1 ) {
            int item = pqmax.top();
            pqmax.pop();
            pqmin.push(item);
        } else if (secondSize > firstSize) {
            int item = pqmin.top();
            pqmin.pop();
            pqmax.push(item);
        }
}

double findMedian(){
    if(pqmax.size()==pqmin.size()){
        return (pqmax.top()/2.0+pqmin.top()/2.0);
    }
    return pqmax.top();
}
int main(){
    
    insert(10);
    cout<<findMedian()<<endl;
    insert(15);
    cout<<findMedian()<<endl;
    insert(21);
    cout<<findMedian()<<endl;
    insert(30);
    cout<<findMedian()<<endl;
    insert(18);
    cout<<findMedian()<<endl;
    insert(19);
    cout<<findMedian()<<endl;
    return 0;
}