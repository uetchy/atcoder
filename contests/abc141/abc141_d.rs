#![allow(unused_imports)]
#![allow(non_snake_case)]

use std::collections::BinaryHeap;
use std::fmt::Debug;
use std::io::stdin;
use std::str::FromStr;

macro_rules! read {
  ($($t: ty),+) => ({
    let mut input = String::new();
    stdin().read_line(&mut input).expect("read error");
    let mut iter = input.split_whitespace();
    ($(iter.next().unwrap().parse::<$t>().expect("parse error"),)+)
  })
}

type A = i64;

fn main() {
  let (_, m) = read!(i32, i32);
  let mut heap = BinaryHeap::<A>::new();

  for i in read_vec() {
    heap.push(i);
  }

  for _ in 0..m {
    let n: A = heap.pop().unwrap();
    heap.push(n / 2);
  }

  println!("{}", heap.iter().sum::<A>());
}


// read from stdin as whitespace separated vector
#[allow(dead_code)]
fn read_vec<T: FromStr>() -> Vec<T> {
  let mut s = String::new();
  stdin().read_line(&mut s).ok();
  s.trim()
    .split_whitespace()
    .map(|e| e.parse().ok().unwrap())
    .collect()
}