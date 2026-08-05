	@ data/text/trainers.inc:494 Route107_Text_RayNotEnoughPokemon (+1 aliases)
	.globl gText_Rom_25AAF5
gText_Rom_25AAF5: @ 0x0825AAF5
	.string "シン『オレらと たたかうなら\nもっと ポケモン つれてきてよ!$"
	.if (. - gText_Rom_25AAF5) > 0x20
	.error "gText_Rom_25AAF5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25AAF5) < 0x20
	.space 0x20 - (. - gText_Rom_25AAF5)
	.endif
