	@ data/maps/Route104/scripts.inc:1003 Route104_Text_WhatsItLikeAtBottomOfSea
	.globl gText_Rom_1E7B35
gText_Rom_1E7B35: @ 0x081E7B35
	.string "うみ かぁ……\pうみのそこ って いったい\nどんな ふうに なってるのかな?{EOS}"
	.if (. - gText_Rom_1E7B35) > 0x27
	.error "gText_Rom_1E7B35 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E7B35) < 0x27
	.space 0x27 - (. - gText_Rom_1E7B35)
	.endif
