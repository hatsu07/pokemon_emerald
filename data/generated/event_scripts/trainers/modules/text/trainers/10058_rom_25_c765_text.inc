	@ data/text/trainers.inc:1202 Route113_Text_LaoPostBattle
	.globl gText_Rom_25C765
gText_Rom_25C765: @ 0x0825C765
	.string "もっと かくれかたを けんきゅう しよう\nそれでは しつれいするで ござる$"
	.if (. - gText_Rom_25C765) > 0x26
	.error "gText_Rom_25C765 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25C765) < 0x26
	.space 0x26 - (. - gText_Rom_25C765)
	.endif
