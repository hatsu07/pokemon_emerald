	@ data/maps/LavaridgeTown/scripts.inc:344 LavaridgeTown_Text_AsYouWishThen
	.globl gText_Rom_1E5C31
gText_Rom_1E5C31: @ 0x081E5C31
	.string "そうかね……\pまあ タマゴを かえしたく なったら\nまた はなしかけて おくれよ{EOS}"
	.if (. - gText_Rom_1E5C31) > 0x29
	.error "gText_Rom_1E5C31 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E5C31) < 0x29
	.space 0x29 - (. - gText_Rom_1E5C31)
	.endif
