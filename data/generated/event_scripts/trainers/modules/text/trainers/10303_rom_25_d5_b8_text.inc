	@ data/text/trainers.inc:1556 Route115_Text_MarlenePostBattle
	.globl gText_Rom_25D5B8
gText_Rom_25D5B8: @ 0x0825D5B8
	.string "ここで ポケモンたちと\nめいそうを していたの!\lでも あまり おちつかない ところね{EOS}"
	.if (. - gText_Rom_25D5B8) > 0x2c
	.error "gText_Rom_25D5B8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25D5B8) < 0x2c
	.space 0x2c - (. - gText_Rom_25D5B8)
	.endif
