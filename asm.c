#include "asm.h"

static const struct Op INSTRUCTIONS[] {
	[I_MV] = {
		.name = "MV",
		.num_args = 2,
		.args = { , },
		.macro = false,
		.instruction = I_MV
	},


};
