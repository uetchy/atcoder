#![allow(unused_imports)]
#![allow(dead_code)]
#![allow(non_snake_case)]

use std::collections::{BinaryHeap,HashMap,HashSet};
use std::fmt::Debug;
use std::io::stdin;
use std::str::FromStr;
use std::borrow::Borrow;

/*
i32 = 10^9 (-2147483648 < x < 2147483647)
i64 = 10^18 (-9223372036854775808 < x < 9223372036854775807)
u32 = 10^9 (0 < x < 4294967295)
u64 = 10^19 (0 < x < 18446744073709551615)
*/

macro_rules! read {
  ($($t: ty),+) => ({
    let mut input = String::new();
    stdin().read_line(&mut input).expect("read error");
    let mut iter = input.split_whitespace();
    ($(iter.next().unwrap().parse::<$t>().expect("parse error"),)+)
  })
}

macro_rules! puts {
  ($($t:expr),+) => {
    $(print!("{} ", &$t);)+
    print!("\n");
  }
}

macro_rules! entry {
  ($map:expr, $idx:expr) => {(*$map.entry($idx).or_insert(0))}
}

fn main() {
  let (N, K, Q) = read!(i32, i32, i32);

  let mut score = HashMap::<i32, i32>::new();
  for _ in 0..Q {
    entry!(score, read::<i32>() - 1) += 1;
  }
  
  for i in 0..N {
    if K - (Q - entry!(score, i)) > 0 {
      print("Yes");
    } else {
      print("No");
    }
  }
}

fn print<T: std::fmt::Display>(target: T)  {
  println!("{}", target);
}

fn debug<T: Debug>(target: &T) {
  println!("{:?}", target);
}

// read from stdin
fn read<T: FromStr>() -> T {
  let mut s = String::new();
  stdin().read_line(&mut s).ok();
  s.trim().parse().ok().unwrap()
}

// read from stdin as whitespace separated vector
fn read_hvec<T: FromStr>() -> Vec<T> {
  let mut s = String::new();
  stdin().read_line(&mut s).ok();
  s.trim()
    .split_whitespace()
    .map(|e| e.parse().ok().unwrap())
    .collect()
}

// read from stdin as line separated vector
fn read_vseq<T: FromStr>(n: u64) -> Vec<T> {
  let mut v = Vec::new();
  for _ in 0..n {
    let mut text = String::new();
    stdin().read_line(&mut text).ok();
    let parsed = text.trim().parse().ok().unwrap();
    v.push(parsed);
  }
  v
}

fn read_matrix<T: FromStr>(n: u32) -> Vec<Vec<T>> {
  let mut v2 = Vec::new();
  for _ in 0..n {
    let mut s = String::new();
    stdin().read_line(&mut s).ok();
    let v = s
      .trim()
      .split_whitespace()
      .map(|e| e.parse().ok().unwrap())
      .collect();
    v2.push(v);
  }
  v2
}