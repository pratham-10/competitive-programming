function getLetter(s) {
    let letter = s[0];
    switch(letter) {
        case "a" || "e" || "i" || "o" ||"u":
            return "A";
        case "b" || "c" || "d" || "f" ||"g":
            return "B";
        case "h" || "j" || "j" || "l" ||"um":
            return "C";
        default:
            return "D";
    }
}

function main() {
    const s = readLine();
    console.log(getLetter(s));
}