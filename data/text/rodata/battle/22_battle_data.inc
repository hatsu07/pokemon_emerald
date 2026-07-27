	@ src/data/debug_trainers.h:119 debug_trainers_line_119 (+2 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2EA62E
gText_Rom_2EA62E: @ 0x082EA62E
	.string "ラプラス$"
	.if (. - gText_Rom_2EA62E) != 0x5
	.error "gText_Rom_2EA62E must retain its original byte length"
	.endif
	.globl gText_Rom_2EA62F
	.set gText_Rom_2EA62F, gText_Rom_2EA62E + 0x1
	.incbin "baserom.gba", 0x2ea633, 0x1

