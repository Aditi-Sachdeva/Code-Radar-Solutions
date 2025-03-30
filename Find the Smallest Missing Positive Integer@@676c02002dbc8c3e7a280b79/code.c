#include <stdio.h>
int smallestMissing(int arr[], int n) {
    int i=0;
        while (i<n) {
            int correct = arr[i]-1;
            if(nums[i] > 0 && nums[i] <= n && nums[i] != nums[correct]){
            int temp = nums[i];
            nums[i] = nums[correct];
            nums[correct] = temp;
            }
            else{
                i++;
            }

        }
    for (int idx = 0; idx < n; i++) {
        if (nums[idx] != idx + 1) {
            return idx + 1;
        }
    }
    return n + 1;
}
int main(){
    int n;
    scanf("%d",&n);
    int nums[n];
    for(int i=0;i<n;i++){
        scanf("%d ",&nums[i]);
    }
    int ans = smallestMissing(nums,n);
    printf("%d",ans);
}