use std::io;
use std::process;

fn main() {

    let mut a = String::new();
    let mut b = String::new();
    let mut op = String::new();

    eprint!("donner a: ");
    io::stdin().read_line(&mut a).expect("Failed to read line");
    eprint!("donner b: ");
    io::stdin().read_line(&mut b).expect("Failed to read line");
    eprint!("donner op: ");
    io::stdin().read_line(&mut op).expect("Failed to read line");

    let a:i32 = a.trim().parse().expect("Failed to parse input");
    let b:i32 = b.trim().parse().expect("Failed to parse input");
    let op:char = op.trim().parse().expect("Failed to parse input");

    let x:i64;

    match op {
            '+' => x=a+b,
            '-' => x=a-b,
            '*' => x=a*b,
            '/' => if b == 0{
                    println!("Division by 0 is undefined");
                    process::exit(1);
                }
                else {
                    x=a / b;
                }
            '%' => x=a%b,
            _ => {println!("{}","invalid op");
                process::exit(1);
                },
        }
    println!("{} {} {} = {}",a,op,b,x);
}