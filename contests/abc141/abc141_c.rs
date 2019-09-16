#![allow(unused_imports)]
#![allow(dead_code)]
#![allow(non_snake_case)]

use std::borrow::Borrow;
use std::collections::{BinaryHeap, HashMap, HashSet};
use std::fmt::Debug;
use std::io::stdin;
use std::str::FromStr;

// entry!(hmap, idx) += 1;
// entry!(hmap, idx, i32::INFINITY) = 0;
macro_rules! entry {
  ($map:expr, $idx:expr) => {
    (*$map.entry($idx).or_insert(0))
  };
  ($map:expr, $idx:expr, $fv:expr) => {
    (*$map.entry($idx).or_insert($fv))
  };
}

// puts!("Yes");
// puts!(N, K, Q);
// puts!(hashMap; debug);
macro_rules! puts {
  ($t:expr) => { println!("{}", $t); };
  ($($t:expr),+;debug) => { $(print!("{:?} ", $t);)+ println!(); };
  ($($t:expr),+) => { $(print!("{} ", $t);)+ println!(); };
}

macro_rules! read {
  // let N = read!();
  () => ({
    let mut s = String::new();
    stdin().read_line(&mut s).ok();
    s.trim().parse::<i32>().unwrap()
  });
  // let line_vec  = read!([i32]);
  ([$t:ty]) => ({
    let mut s = String::new();
    stdin().read_line(&mut s).ok();
    s.trim()
      .split_whitespace()
      .map(|e| e.parse::<$t>().unwrap())
      .collect::<Vec<$t>>()
  });
  // let S = read!(String);
  ($t: ty) => ({
    let mut s = String::new();
    stdin().read_line(&mut s).ok();
    s.trim().parse::<$t>().unwrap()
  });
  // let (N, K) = read!(i32, i64);
  ($($t: ty),+) => ({
    let mut input = String::new(); stdin().read_line(&mut input).ok(); let mut iter = input.split_whitespace();
    ($(iter.next().unwrap().parse::<$t>().unwrap(),)+)
  });
  // let matrix = read!(i32; N,_);
  ($t: ty; $n: expr,) => ({
    let mut mat = Vec::<Vec<$t>>::new();
    for _ in 0..($n) {
      let mut s = String::new();
      stdin().read_line(&mut s).ok();
      let v = s
        .trim()
        .split_whitespace()
        .map(|e| e.parse::<$t>().unwrap())
        .collect::<Vec<$t>>();
      mat.push(v);
    }
    mat
  });
  // let lines_vec = read!(i32; N);
  ($t: ty; $n: expr) => ({
    let mut v = Vec::<$t>::new();
    for _ in 0..($n) {
      let mut text = String::new();
      stdin().read_line(&mut text).ok();
      let parsed = text.trim().parse::<$t>().unwrap();
      v.push(parsed);
    }
    v
  });
}

/*
i32 = 10^9 (-2147483648 < x < 2147483647)
i64 = 10^18 (-9223372036854775808 < x < 9223372036854775807)
u32 = 10^9 (0 < x < 4294967295)
u64 = 10^19 (0 < x < 18446744073709551615)
*/

fn main() {
  let (N, K, Q) = read!(i32, i32, i32);

  let mut score = HashMap::<i32, i32>::new();
  for _ in 0..Q {
    entry!(score, read!() - 1) += 1;
  }

  for i in 0..N {
    if K - (Q - entry!(score, i)) > 0 {
      puts!("Yes");
    } else {
      puts!("No");
    }
  }
}
