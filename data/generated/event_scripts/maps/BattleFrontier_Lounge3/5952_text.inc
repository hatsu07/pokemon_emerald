	@ data/maps/BattleFrontier_Lounge3/scripts.inc:254 BattleFrontier_Lounge3_Text_ThanksOffYouGo
	.globl gText_Rom_237FBE
gText_Rom_237FBE: @ 0x08237FBE
	.string "へっへっへっ…… あんがとよ!\nそんじゃー"
	.byte EOS
	.if (. - gText_Rom_237FBE) > 0x16
	.error "gText_Rom_237FBE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_237FBE) < 0x16
	.space 0x16 - (. - gText_Rom_237FBE)
	.endif
