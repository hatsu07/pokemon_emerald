	@ data/maps/MtPyre_2F/scripts.inc:59 MtPyre_2F_Text_MarkDefeat (+1 aliases)
	.globl gText_Rom_216362
gText_Rom_216362: @ 0x08216362
	.string "ふええええええっ!\nゆるして くださいーっ!{EOS}"
	.if (. - gText_Rom_216362) > 0x17
	.error "gText_Rom_216362 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_216362) < 0x17
	.space 0x17 - (. - gText_Rom_216362)
	.endif
