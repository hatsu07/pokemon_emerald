	@ data/maps/BattleFrontier_Lounge1/scripts.inc:186 BattleFrontier_Lounge1_Text_StatRelativelyGood
	.globl gText_Rom_235941
gText_Rom_235941: @ 0x08235941
	.string "まあまあの のうりょくを もっとるぞ……\n……ふむ…… そんな かんじ かのう!"
	.byte EOS
	.if (. - gText_Rom_235941) > 0x29
	.error "gText_Rom_235941 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_235941) < 0x29
	.space 0x29 - (. - gText_Rom_235941)
	.endif
