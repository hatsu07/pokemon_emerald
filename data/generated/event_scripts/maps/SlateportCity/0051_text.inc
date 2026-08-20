	@ data/maps/SlateportCity/scripts.inc:1047 SlateportCity_Text_WhyAreWeLiningUp
	.globl gText_Rom_1DCE55
gText_Rom_1DCE55: @ 0x081DCE55
	.string "まじめに おかね はらわずに\nむりやり はいれば いいのによ!{EOS}"
	.if (. - gText_Rom_1DCE55) > 0x20
	.error "gText_Rom_1DCE55 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DCE55) < 0x20
	.space 0x20 - (. - gText_Rom_1DCE55)
	.endif
