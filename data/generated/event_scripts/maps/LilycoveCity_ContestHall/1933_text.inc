	@ data/maps/LilycoveCity_ContestHall/scripts.inc:352 LilycoveCity_ContestHall_Text_StillLoveSmartnessContests
	.globl gText_Rom_207DD6
gText_Rom_207DD6: @ 0x08207DD6
	.string "やっぱり かしこさ コンテストよ！\pちせいてきな みどりいろが\nうーん クールだわー！{EOS}"
	.if (. - gText_Rom_207DD6) > 0x2c
	.error "gText_Rom_207DD6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_207DD6) < 0x2c
	.space 0x2c - (. - gText_Rom_207DD6)
	.endif
