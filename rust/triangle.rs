

fn main(){
    let (x,mut m):(i32,_) = (5,0);
    for _i in 0..x{
        for _j in 0..m{
            print!("&");
        }
        println!("&");
        m+=1;
    }
}