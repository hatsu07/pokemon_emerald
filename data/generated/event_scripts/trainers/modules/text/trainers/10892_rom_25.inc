	@ data/text/trainers.inc:2420 Route123_Text_VioletPostBattle
	.globl gText_Rom_25FA75
gText_Rom_25FA75: @ 0x0825FA75
	.string "きのみ めいじんの はなばたけ\nすっごく いいかんじの においで いっぱい!$"
	.if (. - gText_Rom_25FA75) > 0x27
	.error "gText_Rom_25FA75 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25FA75) < 0x27
	.space 0x27 - (. - gText_Rom_25FA75)
	.endif

	@ data/text/trainers.inc:2423 Route123_Text_CameronIntro (+1 aliases)
	.globl gText_Rom_25FA9C
gText_Rom_25FA9C: @ 0x0825FA9C
	.string "サイキックとは きもちの つよさ……\pそう ぼくは だれにも まけないと\nおもっているから つよいよ!$"
	.if (. - gText_Rom_25FA9C) > 0x34
	.error "gText_Rom_25FA9C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25FA9C) < 0x34
	.space 0x34 - (. - gText_Rom_25FA9C)
	.endif
