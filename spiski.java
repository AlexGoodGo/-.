let a = [];

for (let i = 1; i < 1000; i++) {
    if (i % 100 === 15) {
        a.push(i);
    }
}

console.log(a);
