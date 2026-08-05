	@ data/maps/BattleFrontier_Lounge1/scripts.inc:195 BattleFrontier_Lounge1_Text_StatFlawless
	.globl gText_Rom_2359B4
gText_Rom_2359B4: @ 0x082359B4
	.string "ばっちりっ! ぱーふぇくと じゃ!\n……ふむ…… そんな かんじ かのう!"
	.byte EOS
	.if (. - gText_Rom_2359B4) > 0x26
	.error "gText_Rom_2359B4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2359B4) < 0x26
	.space 0x26 - (. - gText_Rom_2359B4)
	.endif
