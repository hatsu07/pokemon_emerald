	@ data/maps/LavaridgeTown/scripts.inc:340 LavaridgeTown_Text_NoRoomForThisEgg
	.globl gText_Rom_1E5C10
gText_Rom_1E5C10: @ 0x081E5C10
	.string "あれ? ポケモン いっぱいで\nタマゴを つれて あるけないよ……{EOS}"
	.if (. - gText_Rom_1E5C10) > 0x21
	.error "gText_Rom_1E5C10 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E5C10) < 0x21
	.space 0x21 - (. - gText_Rom_1E5C10)
	.endif
