	@ data/text/battle_tent.inc:226 SlateportCity_BattleTentLobby_Text_TakeChallenge
	.globl gText_Rom_275335
gText_Rom_275335: @ 0x08275335
	.string "バトルトレードに\nちょうせん しますか?$"
	.if (. - gText_Rom_275335) > 0x15
	.error "gText_Rom_275335 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_275335) < 0x15
	.space 0x15 - (. - gText_Rom_275335)
	.endif
