	@ data/maps/MossdeepCity_SpaceCenter_1F/scripts.inc:281 MossdeepCity_SpaceCenter_1F_Text_SuccessfulLaunchNumber
	.globl gText_Rom_20D0D8
gText_Rom_20D0D8: @ 0x0820D0D8
	.string "ロケットが はっしゃ したよ!\nこれで {STR_VAR_1}かい うちあげ せいこうだ!$"
	.if (. - gText_Rom_20D0D8) > 0x25
	.error "gText_Rom_20D0D8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20D0D8) < 0x25
	.space 0x25 - (. - gText_Rom_20D0D8)
	.endif
