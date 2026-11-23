class ProductOfNumbers {
public:
    vector<int> a;
    ProductOfNumbers() {
        
    }
    
    void add(int num) {
        a.push_back(num);
    }
    
    int getProduct(int k) {
        int prod=1, n=a.size();

        for(int i=n-k; i<n; i++){
            prod*=a[i];
        }

        return prod;
    }
};
