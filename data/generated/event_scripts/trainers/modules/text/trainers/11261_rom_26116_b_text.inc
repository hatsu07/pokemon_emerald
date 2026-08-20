	@ data/text/trainers.inc:2972 Route127_Text_AthenaPostBattle
	.globl gText_Rom_26116B
gText_Rom_26116B: @ 0x0826116B
	.string "あおい いろに かこまれていると\nじかんが すぎるのが\lゆっくりに かんじられる のよ{EOS}"
	.if (. - gText_Rom_26116B) > 0x2c
	.error "gText_Rom_26116B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26116B) < 0x2c
	.space 0x2c - (. - gText_Rom_26116B)
	.endif
