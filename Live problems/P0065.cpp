/*
https://www.geeksforgeeks.org/problems/union-of-two-sorted-arrays-1587115621/1
*/


    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        
        vector<int> result;
        
        int i = 0, j = 0;
        while(i<a.size() && j<b.size()) {
            if(a[i]<b[j]) {
                if(result.size()>0 && result[result.size() -1] == a[i]) {
                    i++;
                    continue;
                }
                result.push_back(a[i]);
                i++;
            } else if(a[i]>b[j]) {
                if(result.size()>0 && result[result.size() -1] == b[j]) {
                    j++;
                    continue;
                }
                result.push_back(b[j]);
                j++;
            } else if(a[i] == b[j]) {
                if(result.size()>0 && result[result.size() -1] == b[j]) {
                    j++;
                    i++;
                    continue;
                }
                result.push_back(a[i]);
                i++;
                j++;
            }
        }
        
        while(i<a.size()) {
            if(result.size()>0 && result[result.size() -1] == a[i]) {
                i++;
                continue;
            }
            result.push_back(a[i]);
            i++;
        }
        
        while(j<b.size()) {
            if(result.size()>0 && result[result.size() -1] == b[j]) {
                j++;
                continue;
            }
            result.push_back(b[j]);
            j++;
        }
        
        return result;
        
    }