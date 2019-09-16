#![allow(unused_imports)]
#![allow(dead_code)]
#![allow(non_snake_case)]

use std::collections::{BinaryHeap, HashMap, HashSet};
use std::fmt::Debug;
use std::io::stdin;
use std::str::FromStr;

// let S = read!(String);
// let N = read!(i32);
// let (N, K, Q) = read!(i32, i32, i64);
macro_rules! read {
  ($t: ty) => ({
    let mut s = String::new();
    stdin().read_line(&mut s).ok();
    s.trim().parse::<$t>().unwrap()
  });
  ($($t: ty),+) => ({
    let mut input = String::new(); stdin().read_line(&mut input).ok(); let mut iter = input.split_whitespace();
    ($(iter.next().unwrap().parse::<$t>().unwrap(),)+)
  });
}

// puts!("Yes");
// puts!(N, K, Q);
// puts!(hashMap; debug);
macro_rules! puts {
  ($t:expr) => { println!("{}", $t); };
  ($($t:expr),+;debug) => { $(print!("{:?} ", $t);)+ println!(); };
  ($($t:expr),+) => { $(print!("{} ", $t);)+ println!(); };
}

fn main() {
  let S = read!(String);
  let even = S
    .chars()
    .enumerate()
    .filter(|&(i, _)| i % 2 == 0)
    .map(|(_, x)| x)
    .collect::<Vec<char>>()
    .binary_search(&'L');
  let odd = S
    .chars()
    .enumerate()
    .filter(|&(i, _)| i % 2 != 0)
    .map(|(_, x)| x)
    .collect::<Vec<char>>()
    .binary_search(&'R');
  match (even, odd) {
    (Err(_), Err(_)) => puts!("Yes"),
    _ => puts!("No"),
  }
}
