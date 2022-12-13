fn main(){
    for i in 0..10 {
        if i == 5 {
            continue;
        }
        println!("{}",i);
    
        if i == 7 {
            break;
        }
    }
    
}