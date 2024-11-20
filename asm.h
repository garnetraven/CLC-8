#ifndef ASM_H
#define ASM_H

struct Input {
	char name[256];
	const char *data, *current, *line;
	usize line_no;

	struct Input *parent;
};

struct Op {
	char name[16];

	usize num_args;
	enum Arg args[8];

	bool macro;

	union {
		// instruction
		struct {
			enum Instruction instruction;
		};

		// macro
		struct {
			char arg_names[8][16];
			struct Token *start, *end;
		};
	};
};
