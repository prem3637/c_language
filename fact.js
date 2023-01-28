let n = 5;
function fact(n, mul = 1) {
  if (n == 1) {
    return mul;
  } else {
    mul = mul * n;
    n--;
    return fact(n, mul);
  }
}
console.log("fact is :", fact(n));
