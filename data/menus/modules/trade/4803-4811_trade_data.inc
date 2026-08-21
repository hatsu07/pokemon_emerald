	@ asm/trade.s:5988 sub_08079BD4 (+1 aliases)
	.globl gText_Rom_5CA294
gText_Rom_5CA294: @ 0x085CA294
	.string "そのポケモンを　こうかんすると\nせんとうできなくなっちゃうよ！{EOS}"
	.if (. - gText_Rom_5CA294) > 0x20
	.error "gText_Rom_5CA294 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA294) < 0x20
	.space 0x20 - (. - gText_Rom_5CA294)
	.endif

	@ asm/trade.s:5988 sub_08079BD4 (+3 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CA2B4
gText_Rom_5CA2B4: @ 0x085CA2B4
	.string "その　ポケモンは　いま\nこうかんに　だせません{EOS}"
	.if (. - gText_Rom_5CA2B4) != 0x18
	.error "gText_Rom_5CA2B4 must retain its original byte length"
	.endif
	.globl gText_Rom_5CA2C8
	.set gText_Rom_5CA2C8, gText_Rom_5CA2B4 + 0x14

	@ asm/trade.s:5988 sub_08079BD4 (+2 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CA2CC
gText_Rom_5CA2CC: @ 0x085CA2CC
	.string "タマゴは　いま\nこうかんに　だせません{EOS}"
	.if (. - gText_Rom_5CA2CC) != 0x14
	.error "gText_Rom_5CA2CC must retain its original byte length"
	.endif
	.globl gText_Rom_5CA2DC
	.set gText_Rom_5CA2DC, gText_Rom_5CA2CC + 0x10

	@ asm/trade.s:5988 sub_08079BD4 (+2 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CA2E0
gText_Rom_5CA2E0: @ 0x085CA2E0
	.string "あいての　ポケモンとは\nいまは　こうかん　できません{EOS}"
	.if (. - gText_Rom_5CA2E0) != 0x1b
	.error "gText_Rom_5CA2E0 must retain its original byte length"
	.endif
