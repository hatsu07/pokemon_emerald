	@ data/maps/LilycoveCity/scripts.inc:496 LilycoveCity_Text_BrendanWontBeBeaten
	.globl gText_Rom_1E0A56
gText_Rom_1E0A56: @ 0x081E0A56
	.string "ユウキ『まあ オレが\n{PLAYER}に まけるわけ ないんだけど$"
	.if (. - gText_Rom_1E0A56) > 0x1c
	.error "gText_Rom_1E0A56 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E0A56) < 0x1c
	.space 0x1c - (. - gText_Rom_1E0A56)
	.endif
