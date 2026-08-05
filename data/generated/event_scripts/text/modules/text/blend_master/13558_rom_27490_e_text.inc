	@ data/text/blend_master.inc:54 BerryBlender_Text_BlendMasterPokeblockCaseFull
	.globl gText_Rom_27490E
gText_Rom_27490E: @ 0x0827490E
	.string "ふむむむっ!\pおぬし ポロックケースが\nいっぱいの ようじゃぞ!\pわしは きょう ずっと ここに おるから\nポロックを へらしてから\lまた くるのじゃ!$"
	.if (. - gText_Rom_27490E) > 0x4d
	.error "gText_Rom_27490E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_27490E) < 0x4d
	.space 0x4d - (. - gText_Rom_27490E)
	.endif
