	@ data/maps/MtPyre_2F/scripts.inc:63 MtPyre_2F_Text_MarkPostBattle
	.globl gText_Rom_216379
gText_Rom_216379: @ 0x08216379
	.string "めったに ひとが はいらない やま だから\nめずらしい ポケモンが いると おもってさ$"
	.if (. - gText_Rom_216379) > 0x2c
	.error "gText_Rom_216379 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_216379) < 0x2c
	.space 0x2c - (. - gText_Rom_216379)
	.endif
