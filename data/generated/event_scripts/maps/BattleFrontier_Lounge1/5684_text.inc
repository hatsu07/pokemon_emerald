	@ data/maps/BattleFrontier_Lounge1/scripts.inc:189 BattleFrontier_Lounge1_Text_StatImpressive
	.globl gText_Rom_23596A
gText_Rom_23596A: @ 0x0823596A
	.string "かなりの ちからを もっとるな!\n……ふむ…… そんな かんじ かのう!"
	.byte EOS
	.if (. - gText_Rom_23596A) > 0x25
	.error "gText_Rom_23596A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23596A) < 0x25
	.space 0x25 - (. - gText_Rom_23596A)
	.endif
