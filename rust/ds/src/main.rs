use std::collections::LinkedList;

fn main() {
    println!("Hello, world!");

    let list01: LinkedList<String> = [
        "c",
        "cpp",
        "python",
        "javascript",
        "typescript",
        "go",
        "rust",
    ]
    .iter()
    .map(|lang| lang.to_string())
    .collect();
    println!("list01: {:?}", list01);

    // converting linkedlist to vec
    let list02 = Vec::from_iter(list01.clone().into_iter());
    println!("list02: {:?}", list02);
}
