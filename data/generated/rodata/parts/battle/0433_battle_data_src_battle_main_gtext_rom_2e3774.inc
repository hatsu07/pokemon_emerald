	@ src/battle_main.c:350 battle_main_line_350
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2E3774
gText_Rom_2E3774: @ 0x082E3774
	.string "エリートレーナー$"
	.if (. - gText_Rom_2E3774) != 0x9
	.error "gText_Rom_2E3774 must retain its original byte length"
	.endif
