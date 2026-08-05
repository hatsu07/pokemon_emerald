	@ data/text/trainers.inc:3425 Route134_Text_HudsonPostBattle
	.globl gText_Rom_262360
gText_Rom_262360: @ 0x08262360
	.string "おれたちの ふねが ながされちゃってさ!\pあいぼうが きの よわい やつだから\nしんぱい してるんだ$"
	.if (. - gText_Rom_262360) > 0x33
	.error "gText_Rom_262360 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_262360) < 0x33
	.space 0x33 - (. - gText_Rom_262360)
	.endif
