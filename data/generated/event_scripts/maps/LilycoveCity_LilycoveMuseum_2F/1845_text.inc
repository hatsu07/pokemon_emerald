	@ data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.inc:236 LilycoveCity_LilycoveMuseum_2F_Text_ItsYouPlayer
	.globl gText_Rom_206681
gText_Rom_206681: @ 0x08206681
	.string "あ あなた! {PLAYER}さん!$"
	.if (. - gText_Rom_206681) > 0xd
	.error "gText_Rom_206681 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_206681) < 0xd
	.space 0xd - (. - gText_Rom_206681)
	.endif
