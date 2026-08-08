	@ data/maps/BattleFrontier_Lounge1/scripts.inc:192 BattleFrontier_Lounge1_Text_StatOutstanding
	.globl gText_Rom_23598F
gText_Rom_23598F: @ 0x0823598F
	.string "すばらしい ちからを もっとる!\n……ふむ…… そんな かんじ かのう!"
	.byte EOS
	.if (. - gText_Rom_23598F) > 0x25
	.error "gText_Rom_23598F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23598F) < 0x25
	.space 0x25 - (. - gText_Rom_23598F)
	.endif
