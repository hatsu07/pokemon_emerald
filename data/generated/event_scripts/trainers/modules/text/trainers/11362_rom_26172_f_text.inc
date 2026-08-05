	@ data/text/trainers.inc:3122 Route130_Text_KatiePostBattle
	.globl gText_Rom_26172F
gText_Rom_26172F: @ 0x0826172F
	.string "こどもたち\nポケモン チャンプ\lめざしてる……$"
	.if (. - gText_Rom_26172F) > 0x18
	.error "gText_Rom_26172F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26172F) < 0x18
	.space 0x18 - (. - gText_Rom_26172F)
	.endif
