	@ src/battle_main.c:338 battle_main_line_338
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2E36F0
gText_Rom_2E36F0: @ 0x082E36F0
	.string "だいすきクラブ$"
	.if (. - gText_Rom_2E36F0) != 0x8
	.error "gText_Rom_2E36F0 must retain its original byte length"
	.endif
