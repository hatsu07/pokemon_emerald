	@ data/maps/SlateportCity/scripts.inc:1051 SlateportCity_Text_WhatDoYouWant
	.globl gText_Rom_1DCE75
gText_Rom_1DCE75: @ 0x081DCE75
	.string "なんだ なんだ!?{EOS}"
	.if (. - gText_Rom_1DCE75) > 0xa
	.error "gText_Rom_1DCE75 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DCE75) < 0xa
	.space 0xa - (. - gText_Rom_1DCE75)
	.endif
