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
console.log("Factorial");
function factorial(N) {
  let num = 1;
  for (let i = 1; i <= N; i++) {
    num = num * i;
  }
  console.log(num);
}
factorial(3);

function checkPrime(N) {
  if (N <= 1) {
    console.log("Not a valid Number");
    return;
  }

  for (let i = 2; i <= Math.sqrt(N); i++) {
    if (N % i === 0) {
      console.log(N, "Not a prime number");
      return;
    }
  }
  console.log(N, "Is a prime number!");
}
checkPrime(113);

function rangedPrime(N) {
  for (let i = 2; i <= N; i++) {
    let isPrime = true;

    for (let j = 2; j <= Math.sqrt(i); j++) {
      if (i % j === 0) {
        isPrime = false;
        console.log(i, "Is not a prime number!");
      }
    }
    if (isPrime) {
      console.log(i, "Is a prime number!");
    }
  }
}
rangedPrime(10);

console.log("A better and earier code below ");
function rangePrime(N) {
  function isPrime(N) {
    for (let i = 2; i < N; i++) {
      if (N % i == 0) {
        return false;
      }
    }
    return true;
  }

  for (let i = 2; i <= N; i++) {
    if (isPrime(i)) {
      console.log(i, "Is a prime number");
    } else {
      console.log(i, "Is not a prime number");
    }
  }
}

rangePrime(10);
