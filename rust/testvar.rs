fn main() {
    let mut x:i32=1000;
    let y:&str="Programming";
    let z=10<9;
    println!("x:{}\ny:{}",x,y);
    x+=100;
    println!("x:{}\ny:{}\nz:{}",x,y,z);
}