#include <bits/stdc++.h>
//
using namespace std;

template <class T> class Iterator{
	virtual bool hasNext() = 0;
	virtual T  next() = 0;	
};

template <typename T> 
class AlternateIterator : public Iterator<T>{
	vector<vector<T>> lists;
	vector<int> index;
	int curr;
public:
	AlternateIterator(vector<vector<T>> &v):curr(0){
		lists = v;
		index.assign(lists.size(),0);
	}
	bool hasNext(){
		if(index[curr] < lists[curr].size()) return true;
		for(int i=1;i<lists.size();i++){
			curr=(curr+1)%lists.size();
			if(index[curr] < lists[curr].size()) return true;
		}
		return false;
	}
	T next(){
		if(index[curr] < lists[curr].size()){
			T ans = lists[curr][index[curr]++];
			curr = (curr+1)%lists.size();
			return ans;
		}
		for(int i=1;i<lists.size();i++){
			curr=(curr+1)%lists.size();
			if(index[curr] < lists[curr].size()){
				T ans = lists[curr][index[curr]++];
				curr = (curr+1)%lists.size();
				return ans;
			}
		}
	}
};

int main(){
	vector<vector<int>> v = {{1,2,3},{4,5,6,7},{8,9},{10}};
	vector<vector<char>> a = {{'r','a',},{'e'},{'b',' '},{'e','r','i'},{'c','e','s','!'}};
	AlternateIterator<int> *it = new AlternateIterator<int>(v);
	while(it->hasNext()){
		cout << it->next() << " ";
	}
	cout << endl;
	cout << endl;
	AlternateIterator<char> *it2 = new AlternateIterator<char>(a);
	while(it2->hasNext()){
		cout << it2->next();
	}
	cout << endl;
}

