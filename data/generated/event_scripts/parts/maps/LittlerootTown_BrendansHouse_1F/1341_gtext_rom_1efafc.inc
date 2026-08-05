	@ data/maps/LittlerootTown_BrendansHouse_1F/scripts.inc:304 PlayersHouse_1F_Text_GoSetTheClock
	.globl gText_Rom_1EFAFC
gText_Rom_1EFAFC: @ 0x081EFAFC
	.string "ママ『{PLAYER}\pおへやの とけい あわせてきて$"
	.if (. - gText_Rom_1EFAFC) > 0x16
	.error "gText_Rom_1EFAFC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1EFAFC) < 0x16
	.space 0x16 - (. - gText_Rom_1EFAFC)
	.endif

	@ data/maps/LittlerootTown_BrendansHouse_1F/scripts.inc:308 PlayersHouse_1F_Text_OhComeQuickly
	.globl gText_Rom_1EFB12
gText_Rom_1EFB12: @ 0x081EFB12
	.string "ママ『……あ! {PLAYER}! {PLAYER}!\nはやく こっちに いらっしゃい!$"
	.if (. - gText_Rom_1EFB12) > 0x21
	.error "gText_Rom_1EFB12 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1EFB12) < 0x21
	.space 0x21 - (. - gText_Rom_1EFB12)
	.endif
