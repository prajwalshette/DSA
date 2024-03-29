 class Solution {
public:
    vector<int> getPrimes(int n){
        vector<int> res;
        bool prime[n + 1];

        for(int i = 0; i < n; i++) 
            prime[i] = true;
        

        for(int i = 2; i < sqrt(n); i++){
            if(prime[i]){
                for(int j = i * i; j <= n; j += i){
                    prime[j] = false;
                }
            }
        }

        for(int i = 2; i <= n; i++){
            if(prime[i]) 
                res.push_back(i);
        }
        return res;
    }

    bool primeSubOperation(vector<int>& nums) {
        vector<int> primes = getPrimes(1000);

        int n = nums.size();
        int prev = nums[n - 1];
        bool needSub = false;

        for(int i = n - 2; i >= 0; i--){
            if(nums[i] < prev){
                prev = nums[i];
                continue;
            }

            needSub = true;
            for(int j = 0; j < primes.size() && primes[j] < nums[i]; j++){
                if(nums[i] - primes[j] < prev){
                    prev = nums[i] - primes[j];
                    needSub = false;
                    break;
                }
            }
            if(needSub) 
                return false;
        }
        return true;
    }
};