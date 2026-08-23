	@ data/maps/Route102/scripts.inc:82 Route102_Text_LetsGoBack
.Lbatch81_text_start_gText_Rom_1E69B0: @ 0x081E69B0
	.string "{PLAYER}さん ありがとう!\nジムに もどろうよ!{EOS}"
	.if (. - .Lbatch81_text_start_gText_Rom_1E69B0) > 0x17
	.error ".Lbatch81_text_start_gText_Rom_1E69B0 may not grow beyond its original slot"
	.endif
	.if (. - .Lbatch81_text_start_gText_Rom_1E69B0) < 0x17
	.space 0x17 - (. - .Lbatch81_text_start_gText_Rom_1E69B0)
	.endif
