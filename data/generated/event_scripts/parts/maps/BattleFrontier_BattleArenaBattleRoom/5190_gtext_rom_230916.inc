	@ data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.inc:494 BattleFrontier_BattleArenaBattleRoom_Text_SetKOTourneyBegin
	.globl gText_Rom_230916
gText_Rom_230916: @ 0x08230916
	.string "しんぱん『かちぬきチームバトル!\nはじめーーー!!"
	.byte EOS
	.if (. - gText_Rom_230916) > 0x1a
	.error "gText_Rom_230916 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_230916) < 0x1a
	.space 0x1a - (. - gText_Rom_230916)
	.endif
