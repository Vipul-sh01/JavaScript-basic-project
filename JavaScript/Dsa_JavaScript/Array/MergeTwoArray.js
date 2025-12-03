function MergeTwoshortedArray(arr1, arr2){
    let MergeArray = [];
    let n1 = arr1.length;
    let n2 = arr2.length;
    let i = 0;
    let j = 0;

    arr1.sort((a,b) => a-b);
    arr2.sort((a,b) => a-b);


    while(i<n1 && j<n2){
        if(arr1[i]<arr2[j]){
            MergeArray.push(arr1[i]);
            i++;
        }
        else{
            MergeArray.push(arr2[j]);
            j++;
        }
    }

    while(i<n1){
        MergeArray.push(arr1[i]);
        i++;
    }

    while(j<n2){
        MergeArray.push(arr2[j]);
        j++;
    }

    console.log(MergeArray);
}

const arr1 = [2,3,4];
const arr2 = [3, 5,7,9];
MergeTwoshortedArray(arr1,arr2);

