	@ data/maps/SlateportCity/scripts.inc:1299 SlateportCity_Text_ComeBackToTradeBerryPowder
	.globl gText_Rom_1DD7BB
gText_Rom_1DD7BB: @ 0x081DD7BB
	.string "くすりと こうかん したくなったら\nまた ここに くるのよ\pわたしが いつも\nおみせ だしてるから ね\pしってた?{EOS}"
	.if (. - gText_Rom_1DD7BB) > 0x3a
	.error "gText_Rom_1DD7BB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DD7BB) < 0x3a
	.space 0x3a - (. - gText_Rom_1DD7BB)
	.endif
