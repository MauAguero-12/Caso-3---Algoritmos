use std::time::{Instant};
fn isIn(pArreglo:Vec<i32>,pBuscado:i32) -> bool{
    for x in 0..10000000 {
        if pArreglo[x] == pBuscado{
            return true;
        }
    }
    return false;
}
fn main(){
    let arreglo: Vec<i32> = (0..10000000).collect();
    let now = Instant::now();
    let res  = isIn(arreglo,-1);
    let total = now.elapsed().as_micros();
    println!("El resultado es: {}", res);
    println!("La duración total es de : {} microsegundos", total);

    
}