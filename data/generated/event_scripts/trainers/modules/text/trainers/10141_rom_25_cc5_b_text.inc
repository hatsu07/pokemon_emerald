	@ data/text/trainers.inc:1325 Route114_Text_SteveDefeat (+1 aliases)
	.globl gText_Rom_25CC5B
gText_Rom_25CC5B: @ 0x0825CC5B
	.string "ボ ボクの ポケモン……{EOS}"
	.if (. - gText_Rom_25CC5B) > 0xd
	.error "gText_Rom_25CC5B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25CC5B) < 0xd
	.space 0xd - (. - gText_Rom_25CC5B)
	.endif
