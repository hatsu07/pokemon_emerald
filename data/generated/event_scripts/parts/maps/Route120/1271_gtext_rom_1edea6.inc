	@ data/maps/Route120/scripts.inc:375 Route120_Text_StevenIllWaitHere
	.globl gText_Rom_1EDEA6
gText_Rom_1EDEA6: @ 0x081EDEA6
	.string "ダイゴ『そう?\pボクは ここで まっているから\nじゅんびを すると いいよ$"
	.if (. - gText_Rom_1EDEA6) > 0x26
	.error "gText_Rom_1EDEA6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1EDEA6) < 0x26
	.space 0x26 - (. - gText_Rom_1EDEA6)
	.endif
