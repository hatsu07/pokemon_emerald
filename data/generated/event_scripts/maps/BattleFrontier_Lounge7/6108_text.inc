	@ data/maps/BattleFrontier_Lounge7/scripts.inc:313 BattleFrontier_Lounge7_Text_MoveWillBeXBattlePoints
	.globl gText_Rom_239D3D
gText_Rom_239D3D: @ 0x08239D3D
	.string "{STR_VAR_1} が ええのんか!\n{STR_VAR_2} BP じゃが ええんじゃの!?"
	.byte EOS
	.if (. - gText_Rom_239D3D) > 0x1f
	.error "gText_Rom_239D3D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_239D3D) < 0x1f
	.space 0x1f - (. - gText_Rom_239D3D)
	.endif
