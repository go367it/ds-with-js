let arr = [1,2,3,4,5]
// adding element at the last of the array
const addElementLast = (num) =>{
    
    arr[arr.length] = num // adding element at the last of the array
    // for printing the elements in the array
    for(let i = 0; i<arr.length; i++){
        console.log(arr[i]," ");
    }
}

// addElementLast(6) // calling the function

const addElementIndex = (index, num) =>{
    for(let i = arr.length; i > index-1; i--){
        arr[i] = arr[i-1]
    }
    arr[index] = num
    for(let i = 0; i<arr.length; i++){
        console.log(arr[i]," ");
    }
}

addElementIndex(2, 10)