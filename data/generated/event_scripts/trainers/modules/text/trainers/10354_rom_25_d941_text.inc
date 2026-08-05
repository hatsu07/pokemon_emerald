	@ data/text/trainers.inc:1628 Route116_Text_KarenRegister1 (+1 aliases)
	.globl gText_Rom_25D941
gText_Rom_25D941: @ 0x0825D941
	.string "あーっ それ ポケナビね!\nあたしも もってるから とうろくして!$"
	.if (. - gText_Rom_25D941) > 0x22
	.error "gText_Rom_25D941 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25D941) < 0x22
	.space 0x22 - (. - gText_Rom_25D941)
	.endif
