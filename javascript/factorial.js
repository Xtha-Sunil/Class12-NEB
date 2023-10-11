function factorial(number) {
  let result = 1;

  for (let i = 2; i <= number; i += 1) {
    result *= i;
  }

  return result;
}

const number = 10;
const result = factorial(number);

console.log(result); // 3628800
