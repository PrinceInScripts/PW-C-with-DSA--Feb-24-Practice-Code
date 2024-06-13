int partition(int arr[],int startIdx,int endIdx){
//     int pivotElement=arr[(startIdx+endIdx)/2];
//     int count=0;

//     for(int i=startIdx;i<=endIdx;i++){
//         if(i==((startIdx+endIdx)/2)) continue;
//         if(arr[i]<=pivotElement){
//             count++;
//         }
//     }
//     int pivotIdx=startIdx+count;
//     swap(arr[pivotIdx],arr[(startIdx+endIdx/2)]);

//     int i=startIdx;
//     int j=endIdx;
//     while(i<pivotIdx && j>pivotIdx){
//         if(arr[i]<arr[pivotIdx]) i++;
//         else if(arr[j]>arr[pivotIdx]) j--;
//         else if(arr[i]>arr[pivotIdx] && arr[j]<=arr[pivotIdx]){
//             swap(arr[i],arr[j]);
//             i++;
//             j--;
//         }
//     }
//     return pivotIdx;
// }