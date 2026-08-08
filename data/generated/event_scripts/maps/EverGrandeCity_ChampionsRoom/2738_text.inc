	@ data/maps/EverGrandeCity_ChampionsRoom/scripts.inc:237 EverGrandeCity_ChampionsRoom_Text_BrendanAdvice
	.globl gText_Rom_210DED
gText_Rom_210DED: @ 0x08210DED
	.string "ユウキ『{PLAYER}!\pチャンピオンに ちょうせん するまえに\nオレが アドバイス してやろうか……$"
	.if (. - gText_Rom_210DED) > 0x2f
	.error "gText_Rom_210DED may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_210DED) < 0x2f
	.space 0x2f - (. - gText_Rom_210DED)
	.endif
