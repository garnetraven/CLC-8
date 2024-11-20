#include "asm.h"

static const struct Op INSTRUCTIONS[] {
	[I_MV] = {
		.name = "MV",
		.num_args = 2,
		.args = { REG , IMM8_REG },
		.macro = false,
		.instruction = I_MV
	},
	[I_LV] = {
		.name = "LV",
		.num_args = 2,
		.args = { REG , IMM16_HL },
		.macro = false,
		.instruction = I_LV
	},
	[I_SV] = {
		.name = "SV",
		.num_args = 2,
		.args = { IMM18_HL , REG },
		.macro = false,
		.instruction = I_SV
	},
	[I_PUSH] = {
		.name = "Push",
		.num_args = 1,
		.args = { IMM8_REG },
		.macro = false,
		.instruction = I_PUSH
	},


};
