const employess =[["ram",300000],["lakhan",40000],["sita",50001]];

function greaterFilter(employess){

    const topEmployee = [];

    employess.map((ele) => {
        if(ele[1] > 50000){
            topEmployee.push(ele);
        }
    })
 return topEmployee;
}

const result = greaterFilter(employess);

for(let i = 0 ; i < result.length ; i++){
    console.log(result[i][0]);
}