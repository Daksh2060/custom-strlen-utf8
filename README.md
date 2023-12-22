# Custom UTF-8 Strlen 

This project introduces a specialized implementation of the `strlen` function in Assembly, designed to handle both C-strings and UTF-8 encoded strings. Unlike the standard C library's `strlen`, this custom implementation goes a step further by accounting for continuation bytes in UTF-8 encoding.

This gives `my_strlen` the ability to accurately calculate the length of UTF-8 strings in terms of characters. The traditional `strlen` may miscount UTF-8 characters since it focuses on counting the total number of bytes without condsidering continuation bytes, leading to inaccuracies in character length determination. This custom `strlen` ensures precise counting by skipping over continuation bytes, offering a two-in-one solution for developers working with UTF-8 encoded data and regular strings.
