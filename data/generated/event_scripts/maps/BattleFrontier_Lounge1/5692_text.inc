	@ data/maps/BattleFrontier_Lounge1/scripts.inc:202 BattleFrontier_Lounge1_Text_HaveBusinessNeedsTending
	.globl gText_Rom_235A18
gText_Rom_235A18: @ 0x08235A18
	.string "なんじゃー?\pわしも いろいろ いそがしい からのう!\nまた こんどに せい!"
	.byte EOS
	.if (. - gText_Rom_235A18) > 0x28
	.error "gText_Rom_235A18 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_235A18) < 0x28
	.space 0x28 - (. - gText_Rom_235A18)
	.endif
