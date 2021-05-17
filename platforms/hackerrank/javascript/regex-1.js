function regexVar() {
     let re = /^([aeiou]).+\1$/;
    return re;
}

function main() {
    const re = regexVar();
    const s = readLine();
    
    console.log(re.test(s));
}