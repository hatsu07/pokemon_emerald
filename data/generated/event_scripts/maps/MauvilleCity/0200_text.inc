	@ data/maps/MauvilleCity/scripts.inc:611 MauvilleCity_Text_WattsonYoungTakeCharge
	.globl gText_Rom_1DE48F
gText_Rom_1DE48F: @ 0x081DE48F
	.string "テッセン『わっはははは!\pわかものの たのもしい すがたを みるのは\nよろこばしい こと じゃな!{EOS}"
	.if (. - gText_Rom_1DE48F) > 0x32
	.error "gText_Rom_1DE48F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DE48F) < 0x32
	.space 0x32 - (. - gText_Rom_1DE48F)
	.endif
