	@ data/maps/Route112/scripts.inc:121 Route112_Text_CantLetAnyonePassUntilTheyreBack
	.globl gText_Rom_1EB08B
gText_Rom_1EB08B: @ 0x081EB08B
	.string "ああ かれらが もどってくる までは\nだれも ここを とおすな! ってよ{EOS}"
	.if (. - gText_Rom_1EB08B) > 0x25
	.error "gText_Rom_1EB08B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1EB08B) < 0x25
	.space 0x25 - (. - gText_Rom_1EB08B)
	.endif
