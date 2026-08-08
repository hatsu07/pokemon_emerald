	@ data/maps/MossdeepCity_SpaceCenter_2F/scripts.inc:420 MossdeepCity_SpaceCenter_2F_Text_MaxieWeWillGiveUp
	.globl gText_Rom_20DF75
gText_Rom_20DF75: @ 0x0820DF75
	.string "マツブサ『わかった……\nねんりょうは あきらめよう……\pわたしには ほかに たしかめ なければ\nならない ことが あるようだ……$"
	.if (. - gText_Rom_20DF75) > 0x41
	.error "gText_Rom_20DF75 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20DF75) < 0x41
	.space 0x41 - (. - gText_Rom_20DF75)
	.endif
