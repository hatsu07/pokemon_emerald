	@ data/maps/Route102/scripts.inc:82 Route102_Text_LetsGoBack
	.globl gText_Rom_1E69B0
gText_Rom_1E69B0: @ 0x081E69B0
	.string "{PLAYER}さん ありがとう!\nジムに もどろうよ!{EOS}"
	.if (. - gText_Rom_1E69B0) > 0x17
	.error "gText_Rom_1E69B0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E69B0) < 0x17
	.space 0x17 - (. - gText_Rom_1E69B0)
	.endif
