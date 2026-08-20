	@ data/text/trainers.inc:2342 Route121_Text_CristinDefeat (+1 aliases)
	.globl gText_Rom_25F782
gText_Rom_25F782: @ 0x0825F782
	.string "いやっ ひどいわ!{EOS}"
	.if (. - gText_Rom_25F782) > 0xa
	.error "gText_Rom_25F782 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F782) < 0xa
	.space 0xa - (. - gText_Rom_25F782)
	.endif
