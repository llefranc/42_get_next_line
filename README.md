# Get_next_line (@42Paris)

"Reading a line on a fd is way too tedious"

![Alt text](https://github.com/lucaslefrancq/42_Get_next_line/blob/main/get_next_line_example.png)

## About

Get_next_line is a project of the mandatory part of the cursus mainly code in C.
It's about file descriptors, read and use of buffers. This get_next_line handle
the bonus part, so it's able to read several files from multiple fds at the same
time using a chainlist.

- Here is the [subject][1]

`This project was code on MacOS`

### Building and running the project

1. Download/Clone this repo

        git clone https://github.com/lucaslefrancq/42_get_next_line

2. Copy your main.c inside the root directory and `cd` into it. Then compile your main with the C files.
	You need to indicate the size of the buffer that's get_next_line is using.

        cd 42_Get_next_line
		gcc -Wall -Werror -Wextra -D BUFFER_SIZE=10 main.c get_next_line.c get_next_line_utils.c

[1]: https://github.com/lucaslefrancq/42_get_next_line/blob/master/get_next_line.en.subject.pdf