fn main() {
  let outer_variable = 112;
  {
        let inner_variable = 213;
        println!("block variable inner: {}", inner_variable);
        println!("block variable outer: {}", outer_variable);
  }
    println!("outer variable: {}", outer_variable);
}
