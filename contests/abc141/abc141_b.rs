#![allow(unused_imports)]
#![allow(dead_code)]
#![allow(non_snake_case)]

use std::collections::{BinaryHeap,HashMap,HashSet};
use std::fmt::Debug;
use std::io::stdin;
use std::str::FromStr;

fn main() {
  let S = read::<String>();
  let even = S.chars().enumerate().filter(|&(i, _)| i % 2 == 0).map(|(_, x)| x).collect::<Vec<char>>().binary_search(&'L');
  let odd = S.chars().enumerate().filter(|&(i, _)| i % 2 != 0).map(|(_, x)| x).collect::<Vec<char>>().binary_search(&'R');
  match (even, odd) {
    (Err(_), Err(_)) => print("Yes"),
    _ => print("No")
  }
}

fn print<T: std::fmt::Display>(target: T)  {
  println!("{}", target);
}

// read from stdin
fn read<T: FromStr>() -> T {
  let mut s = String::new();
  stdin().read_line(&mut s).ok();
  s.trim().parse().ok().unwrap()
}
