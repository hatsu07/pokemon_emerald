	@ data/maps/LilycoveCity_ContestHall/scripts.inc:343 LilycoveCity_ContestHall_Text_YoureBeautifulGrandpa
	.globl gText_Rom_207D59
gText_Rom_207D59: @ 0x08207D59
	.string "キャー！ おじいさん すてきー！$"
	.if (. - gText_Rom_207D59) > 0x11
	.error "gText_Rom_207D59 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_207D59) < 0x11
	.space 0x11 - (. - gText_Rom_207D59)
	.endif
