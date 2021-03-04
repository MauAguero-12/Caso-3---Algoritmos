use rand::Rng;
use std::time::{Instant};
fn isIn(pArreglo:[i32;5000],pBuscado:i32) -> bool{
    for x in 0..5000 {
        if pArreglo[x] == pBuscado{
            return true;
        }
    }
    return false;
}
fn main(){
    let mut arreglo: [i32;5000] = [0;5000];
    let mut rng = rand::thread_rng();
    for x in 0..5000 {
        arreglo[x] = rng.gen_range(0..5000)
    }
    let now = Instant::now();
    let res  = isIn(arreglo,-1);
    let total = now.elapsed().as_micros();
    println!("El resultado es: {}", res);
    println!("La duración total es de : {} microsegundos", total);

    
}