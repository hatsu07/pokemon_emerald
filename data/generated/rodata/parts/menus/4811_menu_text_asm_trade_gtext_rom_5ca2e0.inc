	@ asm/trade.s:5988 sub_08079BD4 (+2 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CA2E0
gText_Rom_5CA2E0: @ 0x085CA2E0
	.string "あいての　ポケモンとは\nいまは　こうかん　できません$"
	.if (. - gText_Rom_5CA2E0) != 0x1b
	.error "gText_Rom_5CA2E0 must retain its original byte length"
	.endif
