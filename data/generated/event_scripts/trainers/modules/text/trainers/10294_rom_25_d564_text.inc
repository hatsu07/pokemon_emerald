	@ data/text/trainers.inc:1544 Route115_Text_AlixDefeat (+1 aliases)
	.globl gText_Rom_25D564
gText_Rom_25D564: @ 0x0825D564
	.string "くっ…… なかなか!$"
	.if (. - gText_Rom_25D564) > 0xb
	.error "gText_Rom_25D564 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25D564) < 0xb
	.space 0xb - (. - gText_Rom_25D564)
	.endif
