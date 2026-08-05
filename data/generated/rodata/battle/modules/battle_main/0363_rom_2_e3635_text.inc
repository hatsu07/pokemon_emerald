	@ src/battle_main.c:321 battle_main_line_321
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2E3635
gText_Rom_2E3635: @ 0x082E3635
	.string "うきわボーイ$"
	.if (. - gText_Rom_2E3635) != 0x7
	.error "gText_Rom_2E3635 must retain its original byte length"
	.endif
