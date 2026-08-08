	@ data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.inc:179 LilycoveCity_LilycoveMuseum_1F_Text_VeryOldPainting
	.globl gText_Rom_205EBA
gText_Rom_205EBA: @ 0x08205EBA
	.string "むかしの ひとが かいた えだ!\nところどころ えのぐが はがれてる$"
	.if (. - gText_Rom_205EBA) > 0x23
	.error "gText_Rom_205EBA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_205EBA) < 0x23
	.space 0x23 - (. - gText_Rom_205EBA)
	.endif
