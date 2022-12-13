fn main(){
    let (mut m,x):(i32,i32)=(1,4);
    if x<0{
        eprintln!("error, {} is a negative number.",x);
    }
    else{
        for i in 1..x+1{
            m*=i;
        }
        println!("{}",m);
    }
    
}