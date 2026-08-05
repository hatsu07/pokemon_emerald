	@ data/maps/EverGrandeCity_ChampionsRoom/scripts.inc:240 EverGrandeCity_ChampionsRoom_Text_BrendanYouveWon
	.globl gText_Rom_210E1C
gText_Rom_210E1C: @ 0x08210E1C
	.string "ユウキ『{PLAYER}……\pおまえ ひょっとして\nチャンピオンに かったのか?$"
	.if (. - gText_Rom_210E1C) > 0x23
	.error "gText_Rom_210E1C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_210E1C) < 0x23
	.space 0x23 - (. - gText_Rom_210E1C)
	.endif
