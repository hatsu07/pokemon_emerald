	@ data/text/trainers.inc:3047 Route128_Text_HarrisonDefeat (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_261490
gText_Rom_261490: @ 0x08261490
	.string "あっひゃ\nやっぱ かてんわな{EOS}"
	.if (. - gText_Rom_261490) != 0xf
	.error "gText_Rom_261490 must retain its original byte length"
	.endif
