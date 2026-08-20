	@ data/maps/SlateportCity/scripts.inc:1295 SlateportCity_Text_WhenYouGetMoreBringItToMe
	.globl gText_Rom_1DD7A5
gText_Rom_1DD7A5: @ 0x081DD7A5
	.string "そう\nこなが できたら また よろしくね!{EOS}"
	.if (. - gText_Rom_1DD7A5) > 0x16
	.error "gText_Rom_1DD7A5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DD7A5) < 0x16
	.space 0x16 - (. - gText_Rom_1DD7A5)
	.endif
