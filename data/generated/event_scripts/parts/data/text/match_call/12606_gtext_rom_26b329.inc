	@ data/text/match_call.inc:784 MatchCall_Text_Brendan4
	.globl gText_Rom_26B329
gText_Rom_26B329: @ 0x0826B329
	.string "ユウキ『そのこえは {PLAYER}?\pカナシダトンネル って\nカナズミと シダケを むすぶから\lカナシダトンネル なんだよ\pおまえ…… しってたか?"
	.byte EOS
	.if (. - gText_Rom_26B329) > 0x46
	.error "gText_Rom_26B329 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26B329) < 0x46
	.space 0x46 - (. - gText_Rom_26B329)
	.endif
