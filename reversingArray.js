const reversingArray = (arr) =>{
    for(let i=0; i<=arr.length ; i++){
        if(i >= arr.length / 2 ){
            break
        }
        let temp = arr[i];
        arr[i] = arr[arr.length-i-1]
        arr[arr.length-i-1] = temp
        
    }
    console.log(arr)
}

reversingArray([1,2,3,4,5])