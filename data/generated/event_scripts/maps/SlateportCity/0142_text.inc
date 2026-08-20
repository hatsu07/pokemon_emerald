	@ data/maps/SlateportCity/scripts.inc:1289 SlateportCity_Text_FineBerryPowderTradeSomethingElse
	.globl gText_Rom_1DD769
gText_Rom_1DD769: @ 0x081DD769
	.string "まあ いいこな だこと!\pあなたが くれた こなで\nまた いいくすりを つくれるわ!\pほかにも なにか こうかんする?{EOS}"
	.if (. - gText_Rom_1DD769) > 0x3c
	.error "gText_Rom_1DD769 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DD769) < 0x3c
	.space 0x3c - (. - gText_Rom_1DD769)
	.endif
