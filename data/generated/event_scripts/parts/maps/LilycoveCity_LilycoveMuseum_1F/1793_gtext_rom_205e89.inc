	@ data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.inc:176 LilycoveCity_LilycoveMuseum_1F_Text_ExcellentCanYouComeWithMe
	.globl gText_Rom_205E89
gText_Rom_205E89: @ 0x08205E89
	.string "そうですか! えが おすき ですか!\pでは ちょっと わたしに\nついてきて ください ませんか?$"
	.if (. - gText_Rom_205E89) > 0x31
	.error "gText_Rom_205E89 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_205E89) < 0x31
	.space 0x31 - (. - gText_Rom_205E89)
	.endif
