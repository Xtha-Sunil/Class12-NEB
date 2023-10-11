const str = "HelloWorld";

function removeALLCapitalLetters(str) {

//takes the sring and splits each character to form a character array of the string 
    const strArray = str.split("");

//initilazing a new array 
    let new_str = [];

// map menthod is and ittrartor , that ittrates over each element of the array individually , it is similar to a loop but is not exacltly a loop 
    strArray.map((ele) => {
        // checks if character is already in upper case
        if(ele !== ele.toUpperCase()){
            // pushes all elements not in upper case to the empty array , at the last index
            new_str.push(ele);
        }
    });
   
 // joins all the elements of the array without any space 
    console.log(new_str.join(""));
}

//function call 
removeALLCapitalLetters(str);