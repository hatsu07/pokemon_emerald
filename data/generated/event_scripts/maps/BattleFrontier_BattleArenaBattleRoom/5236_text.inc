	@ data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.inc:593 BattleFrontier_BattleArenaBattleRoom_Text_GoingToBeFunNextTime
	.globl gText_Rom_230C6D
gText_Rom_230C6D: @ 0x08230C6D
	.string "ぅうーん!\pつぎに あえるときが\nたのしみに なって きたなー!"
	.byte EOS
	.if (. - gText_Rom_230C6D) > 0x21
	.error "gText_Rom_230C6D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_230C6D) < 0x21
	.space 0x21 - (. - gText_Rom_230C6D)
	.endif
