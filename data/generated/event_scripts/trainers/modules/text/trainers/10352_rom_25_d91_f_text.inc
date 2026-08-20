	@ data/text/trainers.inc:1628 Route116_Text_KarenRegister1 (+1 aliases)
	.globl gText_Rom_25D91F
gText_Rom_25D91F: @ 0x0825D91F
	.string "あーっ それ ポケナビね!\nあたしも もってるから とうろくして!{EOS}"
	.if (. - gText_Rom_25D91F) > 0x22
	.error "gText_Rom_25D91F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25D91F) < 0x22
	.space 0x22 - (. - gText_Rom_25D91F)
	.endif
