function odd(N) {
  for (let number = 1; number <= N; number = number += 1) {
    if (number % 2 == 1) {
      console.log("Odds", number);
    }
  }
}
odd(7);
console.log("------xxxxx-------");
function Evens(N) {
  for (let number = 2; number <= N; number = number += 2) {
    if (number % 2 == 0) {
      console.log("Evens", number);
    }
  }
}
Evens(10);
console.log("------xxxxx-------");

function sums(N) {
  let newNum = 0;
  for (let num = 0; num <= N; num++) {
    newNum += num;
    console.log(newNum);
  }
  console.log(newNum);
}
sums(6);
