	@ data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.inc:212 LilycoveCity_LilycoveMuseum_1F_Text_ThisMuseumIsInspiration
	.globl gText_Rom_20604F
gText_Rom_20604F: @ 0x0820604F
	.string "この びじゅつかんは\nすごい えが たくさん みられるし\lかんちょうも すばらしい ひとだし\lぼくたち がかの あいだ でも\lあこがれの ばしょ なんだよ{EOS}"
	.if (. - gText_Rom_20604F) > 0x4e
	.error "gText_Rom_20604F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20604F) < 0x4e
	.space 0x4e - (. - gText_Rom_20604F)
	.endif
