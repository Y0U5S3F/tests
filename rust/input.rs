use std::io;

fn main() {
    println!("give a");
    let mut a = String::new();
    io::stdin()
        .read_line(&mut a)
        .expect("Failed to read line");
    let a: i32 = a.trim().parse().expect("Please type a number!");
    println!("give b");
    let mut b = String::new();
    io::stdin()
        .read_line(&mut b)
        .expect("Failed to read line");
    let b: i32 = b.trim().parse().expect("Please type a number!");
    print!("{}",i32::pow(a,3)+i32::pow(b,3)+3*a*b*(a+b));
}
