	@ data/maps/Route118/scripts.inc:282 Route118_Text_TryCatchingMonWithGoodRod
	.globl gText_Rom_1ECC4C
gText_Rom_1ECC4C: @ 0x081ECC4C
	.string "いいつりざおで\nいろんな ポケモンを つると いいよ！{EOS}"
	.if (. - gText_Rom_1ECC4C) > 0x1c
	.error "gText_Rom_1ECC4C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1ECC4C) < 0x1c
	.space 0x1c - (. - gText_Rom_1ECC4C)
	.endif
