	@ data/maps/SlateportCity/scripts.inc:1125 SlateportCity_Text_CaptainComeBackWithBigFish
	.globl gText_Rom_1DD13B
gText_Rom_1DD13B: @ 0x081DD13B
	.string "なんだ なんだ!?\pかんちょうは うみの そこから\nおおもの でも つりあげたのか?{EOS}"
	.if (. - gText_Rom_1DD13B) > 0x2b
	.error "gText_Rom_1DD13B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DD13B) < 0x2b
	.space 0x2b - (. - gText_Rom_1DD13B)
	.endif
