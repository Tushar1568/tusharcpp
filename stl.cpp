#include <bits/stdc++.h>
using namespace std;
int main()
{
    struct node {
	string str; 
	int num;
	double doub; 
	char x; 
 
	node(str_, num_, doub_, x_) {
		str = str_; 
		num = num_; 
		doub = doub_; 
		x = x_; 
	}
};
    array<int, 5> ar = {1, 2,6,7,8};
    for (int i = 0; i < 5; i++)
    {
        cout << ar.at(i) << endl;
    }
    for (auto it = ar.begin(); it!=ar.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    for (auto it = ar.rbegin(); it!=ar.rend(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    for (auto it = ar.end()-1; it>=ar.begin(); it--)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    for(auto it:ar){
        cout<<it<<" ";
    }
     cout<<endl;
     //Vector 
    vector<int>v;
    v.push_back(2);
    cout<<v.size()<<endl;
    v.push_back(4);
    cout<<v.size()<<endl;
    v.pop_back();
     cout<<v.size()<<endl;
    v.clear();//clears all element 
    cout<<v.size()<<endl;

    // vector<int> vec1(6,2);  //->{2,2,2,2,2,2}
    // vector<int> vec2(4,1);
    // vector<int> vec3(vec2.begin(),vec2.end());
    // vector<int> vec3(vec2); //copy the entire vec2 into vec3

    vector<int> tush;
    tush.push_back(2);
    tush.push_back(4);
    tush.push_back(6);
    tush.push_back(8);
    vector<int> tush1(tush.begin(),tush.begin()+2); //{2,4}

    // vector<vector<int>>vect;
    
    // vector<int>tush2;
    // tush2.push_back(6);
    // tush2.push_back(8);
    // vect.push_back(tush1); //{2,4}
    // vect.push_back(tush2); //{6,8}
    vector<vector<int>>vec;
    vector<int>vec1;
    vec1.push_back(3);
    vec1.push_back(4);
    vector<int>vec2;
    vec2.push_back(7);
    vec2.push_back(8);
    vector<int>vec3;
    vec2.push_back(9);
    vec2.push_back(10);
    vec2.push_back(12);
    for(auto vctr:vec){
       for(auto it:vctr){
        cout<<it<<" ";
       } 
       cout<<endl;
    }
    fot(int i=0;i<vec.size();i++){
        for(int j=o;j<vec[j].size();j++){
            cout<<vec[i][j]<<" ";
        }
        cout<<endl;

    }
    //defin 10 x 20
    vector<vector<int>>vec(10,vector<int>(20,0));
    vec.push_back(vector<int>(20,0));
    cout<<vec.size();
    // Now the size of the vector will be 11
    vector<int>ar[6];
    arr[0].push_back(8);//for this index of array is dynamic
    //10 X 20 X 30
     //3d vector
    vector<vector<vector<int>>>vec(10,vector<vector<int>>vec(20,vector<int>(30,0)));



    // SET
    set<int>st; //stores unique elements
    int n;
    cin>>n;
    for ( i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        st.insert(x); // O(log n){2,4,6}
    }
    st.erase(st.begin());  // erases 2 {4,6}
    st.erase(6); //  O(log n)

    set<int>st={2,4,6,9};
    auto it=st.find(6);
    auto it=st.find(8); //  it=st.end()
    st.emplace(2);  //st.insert(2)

    set<int>st1;
    st1.insert(6);
    st1.insert(8);
    for(auto it=st1.begin();it!=st1.end();it++){
        cout<<*it<<endl;
    }
    for(auto it:st1){
        cout<<it<<" ";
    }
    st1.erase(st1.begin(),st1.end()) // deletes entire set

    unordered_set<int>ust;
    ust.insert(2);
    ust.insert(4);
    ust.insert(6);
    multiset<int>ms;
    ms.insert(2);
    ms.insert(2);
    ms.insert(1);
    ms.insert(4);
    ms.insert(6); // ms->{1,2,2,4,6}
    ms.count(2); // 2
    
    // MAP 
    map<string,int>mp; //o(logn)
    mp["david"]=35;
    mp["smith"]=42;
    mp["william"]=96;
    mp["brooks"]=98;
    mp.emplace("david",35);
    
    for(auto it:mp){
        cout<<it.first<<" "<<it.second()<<endl;
    }
    for(auto it=mp.begin();it!=mp.end();it++){
        cout<<it->first<<" ">>it->second<<endl;
    }

    unordered_map<int,int> // does not store in order  
      

         // Stack and Queue  
         stack<int>st;
         st.push(1);
         st.push(4);
         st.push(3);
         st.push(6);
       cout<<st.top()<<endl;  // 6
       st.pop() // deletes 6
       while(!st.empty()){
        st.pop()
       }
       if(!st.empty()){
        cout<<st.top();
       }

       queue<int>q;
       priority_queue<int>pqe;
       pqe.push(2);
       pqe.push(4);
       pqe.push(6);
       pqe.push(8);
       cout<<pqe.top(); // 8
       pqe.pop();
       cout<<pqe.top();  //6
       priority_queue<pair<int,int>>pqe;
       pqe.push(1,6);
       pqe.push(1,7);
       pqe.push(1,8);
       priority_queue<int,vector<int>,greater<int>>pqe;
       pqe.push(2);
       pqe.push(4);  // 2,4,6,8
       pqe.push(6);
       pqe.push(8);
   cout<<pqw.top();  // 2


   priority_queue<int> pq;
	pq.push(1); 
	pq.push(5); 
	pq.push(2); 
	pq.push(6); 
 
	cout << pq.top(); // print 6 
	pq.pop(); 
	cout << pq.top(); // print 5 
 
	priority_queue<pair<int,int>> pq;
	pq.push(1, 5); 
	pq.push(1, 6); 
	pq.push(1, 7); 
 
	priority_queue<int> pq;
	pq.push(-1); // pq.push(-1 * el); 
	pq.push(-5); 
	pq.push(-2); 
	pq.push(-6); 
 
	cout << -1 * pq.top() << endl; // prints 1
 
	// min priority queue is 
	priority_queue<int, vector<int>, greater<int>> pq; 
	pq.push(1); 
	pq.push(5); 
	pq.push(2); 
	pq.push(6); 
 
	cout << pq.top() << endl; // prints 1 
 
 
 
	priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq; 
 
 
	dequeue<int> dq; 
	// push_front() 
	// push_back() 
	// pop_front() 
	// pop_back()
	// begin, end, rbegin, rend 
	// size 
	// clear
	// empty 
	// at 
 
 
	list<int> ls; 
	// push_front() 
	// push_back() 
	// pop_front() 
	// pop_back()
	// begin, end, rbegin, rend 
	// size 
	// clear
	// empty 
	// at 
	// remove -> O(1) 
	ls.push_front(1); 
	ls.push_front(2); 
	ls.push_front(3);
	ls.remove(2); -> // o(1) operation 
 
 
 
	// given N elements, print the elements that occurs maximum 
	// number of times 
	// input 
	// 5 
	// 1 3 3 3 2 
 
	// output 
	// 3
 
 
	int n;
	cin >> n; 
	map<int,int> mpp; 
	int maxi = 0; 
	for(int i = 0;i<n;i++) {
		int x;
		cin >> x;
		mpp[x]++; 
		if(mpp[x] > mpp[maxi]) {
			maxi = x; 
		}
	}
	cout << x << endl; 
 
 
 
	// given N elements, print all elements in sorted order 
	// input 
	// n = 6 
	/// 6 6 3 2 3 5 
 
	// output 
	// 2 3 3 5 6 6 
 
	int n;
	cin >> n;
	multiset<int> ms; 
	for(int i=0;i<n;i++) {
		int x;
		cin >> x; 
		ms.insert(x); 
	}
 
	for(auto it : ms) {
		cout << it << endl; 
	}
 
 
 
 
	// Day 3 
	// Bitset 
	// int -> 16 bits 
	// char -> 8 bits
	int a[100]; 
	char a[100]; 
 
	// bitset -> 1 bit
 
	bitset<5> bt; // stores 1 or 0 
	cin >> bt; // 10111
 
	// all 
	// true // false
	cout << bt.all(); // returns a true or a false
 
	// any 
	// true 
	cout << bt.any(); // bt -> 10011
 
	// false
	cout << bt.any(); // bt -> 00000
 
	// count 
	// for bt -> 10100
	// prints 2 
	cout << bt.count(); // print the number of set bits
 
	// flip 
	// bt -> 10100
	bt.flip(2); // bt will become 10000
 
	bt.flip(); 
 
	// none 
	// if none is set, then true, else false 
	// bt -> 10000
	cout << bt.none(); // false 
 
	// bt -> 00000
	cout << bt.none(); //true 
 
	// set 
	bt.set(); // 11111 
 
	bt.set(2); // sets the 2nd index
 
	bt.set(2, 0); 
 
 
	// reset 
	bt.reset() // turn all indexes to 0 
 
	bt.reset(2); // turn the 2nd index to 0 
 
	// size 
	cout << bt.size(); // prints 5 
 
	// test 
 
	cout << bt.test(1); // check if the bit is set or not at index  1
 
 
	// Algorithms 
	// sorting 
	// array, vector 
	int n;
	cin >> n; 
	int arr[n]; 
	for(int i = 0;i<n;i++) cin >> arr[i]; 
	// takes n log n 
	sort(arr, arr+n); // in increasing order  
	// sort from 1 to 3 
	sort(arr + 1, arr + 4);
 
    vector<int> vec(5, 0);
    for(int i = 0;i<n;i++) {
    	cin >> vec[i]; 
    }
 
    sort(vec.begin(), vec.end()); // [)
 
    // vec -> {1, 6, 2, 7, 4} 
    //         0  1  2  3  4 
    // sort it so that only indexes from 1 to 3  
    // final vec -> {1, 2, 6, 7, 4}
    sort(vec.begin() + 1, vec.begin() + 4); // [1, 4)
 
 
    // If I wanna reverse
    // reverse(startIterator, endIterator) -> [)  
    reverse(arr, arr+n); 
 
    reverse(arr + 1, arr + 4); 
 
    reverse(vec.begin(), vec.end()); 
 
    reverse(vec.begin() + 1, vec.begin() + 4); 
 
 
 
    // If i want to fine the maximum elements in any index range 
    // i to j give me the maximum 
 
    // *max_element(firstIterator, lastIterator); 
    int maxi = INT_MIN; 
    for(int k = i;k<=j;k++) {
    	if(a[k] > maxi) {
    		maxi = a[k]; 
    	}
    }
 
 
    int el = *max_element(arr, arr+n); 
    int el = *min_element(arr, arr+n); 
 
 
    int el = *max_element(vec.begin(), vec.end()); 
    int el = *min_element(vec.begin(), vec.end()); 
 
 
 
    // I give you a range and I want you to find the sum in that range 
    // i - j, tell me the sum in that range i to j 
    int sum = 0;
    for(int k = i;k<=j;k++) {
    	sum += arr[k]; 
    }
 
    // accumulate(startIterator, endIterator, initialSum);
    int sum = accumulate(arr, arr+n, 0); 
    int sum = accumulate(vec.begin(), vec.end(), 0);
 
 
    // arr[] -> [1, 6, 7, 1, 2, 1, 3] 
    // x = 1 
    // tell me how many times the element 1 occurs in the array 
    int cnt = 0;
    // O(N)
    for(int i = 0;i<n;i++) {
    	if(arr[i] == x) {
    		cnt++; 
    	}
    } 
    cout << cnt; 
 
    /// count(firstIterator, lastIterator, x) 
    int cnt = count(arr, arr+n, 1);
    int cnt = count(vec.begin(), vec.end(), 1); 
 
 
    // arr[] -> {1, 2, 5, 1, 2, 4, 4} 
    // i want you to find the first occurrence of 2
    // it is in the index 1 
 
    int ind = -1; 
    for(int i = 0;i<n;i++) {
    	if(arr[i] == x) {
    		ind = i;
    		break;
    	}
    }
    cout << ind;
 
 
    // arr[] -> {1, 2, 5, 1, 2, 4, 4} 
    auto it = find(arr, arr+n, 2); // return an iterator 
    // pointing to the first instance of it, or else it 
    // returns pointing to the end() if it is not there 
 
    int ind = it - arr; 
 
 
    auto it = find(vec.begin(), vec.end(), 2); 
    int ind = it - vec.begin(); 
 
 
    // arr[] -> {1, 5, 6, 2, 3, 5, 6}
    // x = 4 
    auto it = find(vec.begin(), vec.end(), 4); 
    if(it == vec.end()) {
    	cout << "element is not present"; 
    }
    else {
    	cout << "Element is first present at: " << it - vec.begin(); 
    }
 
 
    // binary search 
    // this stl only works on SORTED arrrays
    // arr[] -> {1, 5, 7, 9, 10} 
    // x = 9
    // true -> 9 exists in my arr 
    // x = 8 
    // false -> 8 does not exist in my arr 
 
 
    // binary_search(firstIterator, lastIterator, x)
    // returns a true or returns a false 
    // works in log n complexity 
    bool res = binary_search(arr, arr+n, 8); 
    bool res = binary_search(vec.begin(), vec.end(), 8); 
 
 
 
    // lower_bound function 
    // returns an iterator pointing to the first
    // element which is not less than x 
    // arr[] -> {1, 5, 7, 7, 8, 10, 10, 10, 11, 11, 12} 
    // x = 10 
    // x = 6 
    // x = 13 
    // this works in log N 
 
    auto it = lower_bound(arr, arr+n, x); 
    ind = it - arr; 
 
    auto it = lower_bound(vec.begin(), vec.end(), x); 
    int ind = it - vec.begin();
 
    int ind =  lower_bound(vec.begin(), vec.end(), x) - vec.begin(); 
 
 
 
    // upper bound 
    // returns an iterator which points to an element which is 
    // just greater than x
    // arr[] -> {1, 5, 7, 7, 8, 10, 10, 10, 11, 11, 12} 
    // x = 7 
    // x = 6 
    // x = 12 -> end() iterator 
    // x = 15 -> end() iterator 
 
    auto it = upper_bound(arr, arr+n, x); 
    ind = it - arr; 
 
    auto it = upper_bound(vec.begin(), vec.end(), x); 
    int ind = it - vec.begin();
 
    int ind =  upper_bound(vec.begin(), vec.end(), x) - vec.begin();
 
 
 
    // Q1. find me the first index where the element X lies 
    // find function can be used but that takes O(N) times
    // the array is sorted.. 
 
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0;i<n;i++) {
    	cin >> arr[i]; 
    }
 
    int x; 
    cin >> x; 
 
    // arr[] -> {1, 5, 7, 7, 8, 10, 10, 10, 11, 11, 12} 
    // find x = 7
    int ind = lower_bound(arr, arr+n, x) - arr; 
 
    // find x = 6 
    int ind = lower_bound(arr, arr+n, x) - arr;
 
 
 
    // There are couple of ways to do it
    // 1st way 
    if(binary_search(arr, arr+n, x) == true) {
    	cout << lower_bound(arr, arr+n, x) - arr; 
    }
    else cout << "does not exists"; 
 
 
    // 2nd way 
    int ind = lower_bound(arr, arr+n, x) - arr; 
    // arr[] -> {1, 5, 7, 7, 8, 10, 10, 10, 11, 11, 12} 
    /////////////0  1  2  3  4  5   6   7   8   9   10 
    // find x = 13 -> ind = 11, which is out of bound 
    // hence arr[11] will give you runtime error 
    if(ind != n && arr[ind] == x) {
    	cout << "Found at: " << ind;  
    }
    else {
    	cout << "Not found";
    }
 
 
 
    // Find me the last occurrence of x in an arr 
    // arr[] -> {1, 5, 7, 7, 8, 10, 10, 10, 11, 11, 12} 
    ///index/////0  1  2  3  4  5   6   7   8   9   10 
 
    // last occurrence of x = 10, ans = 7th index
    // last occurrence of x = 6, ans = does not exists
    // last occurrence of x = 0, 
    // last occurence of x = 13 
    int ind = upper_bound(arr, arr+n, x) - arr; 
    ind -= 1; 
    if(ind>=0 && arr[ind] == x) {
    	cout << "last occurrence: " << ind; 
    }
    else {
    	cout << "Does not exists"; 
    }
 
 
 
 
    // Q3. tell me the number of times the x appears in arr 
    // arr[] -> {1, 5, 7, 7, 8, 10, 10, 10, 11, 11, 12} 
    ///index/////0  1  2  3  4  5   6   7   8   9   10 
 
    // x = 10, ans = 3 
    // x = 7, ans = 2 
 
 
    // Next Permutation 
    // string s = "abc"
    // all permutations are as follows: 
 
    // abc
    // acb 
    // bac
    // bca
    // cab
    // cba
 
 
 
    // s = "bca" 
    bool res = next_permutation(s.begin(), s.end()); 
 
    // s = "cba"
    bool res = next_permutation(s.begin(), s.end()); 
 
    // if I give you any random string s = "bca"
    // i want you to print all the permutations 
 
    string s = "bca"; 
    sort(s.begin(), s.end()); // this makes the string as "abc"
    do {
    	cout << s << endl; 
    } while(next_permutation(s.begin(), s.end())); 
 
 
    int arr[] = {1, 6, 5}; 
    int n = 3; 
    sort(arr, arr + n); // this makes the array as {1, 5, 6}
    do {
    	for(int i = 0;i<n;i++) cout << arr[i] << " "; 
    	cout << endl; 
    } while(next_permutation(arr, arr+n)) ; 
 
 
    // prev permutation 
    bool res = prev_permutation(s.begin(), s.end()); 
 
 
    // COMPARATOR 
    sort(arr, arr+n); // sorts everything in ascending order
    sort(arr, arr+n, comp); 
 
 
    // descending 
    sort(arr, arr+n, comp); 
    // greater<int> is an inbuilt comparator
    // which works only if you wanna do this in descending 
    sort(arr, arr+n, greater<int>); 
 
 
 
    // question of pair 
    sort(arr, arr+n, greater<pair<int,int>>);
 
 
    vector<vector<int>> vec(n, vectorM<int>(n, 0)); 





bool comp(int el1, int el2) {
	if(el1 <= el2) {
		return true; 
	}
	return false; 
}
 
bool comp(pair<int,int> el1, pair<int,int> el2) {
	if(el1.first < el2.first) {
		return true; 
	}
	if(el1.first == el2.first) {
		if(el1.second > el2.second) {
			return true; 
		}
	}
	return false; 
}
 
// arr 
// pair<int,int> arr[] = {{1, 4},{5, 2},{5, 9}};
// after sorting arr[] = {{1, 4}, {5, 9}, {5, 2}}
sort(arr, arr+3, comp); 
 
// sorts in ascending according to first 
// if first is equal then sorts according to second in ascending 
sort(arr, arr+3);
// i want you to sort this in such a way 
// that the element who have first element in pair smaller
// appears first, and if first is equal then sort according 
// to second and keep the larger second




 
}





    
    

    



    
    


           




  }