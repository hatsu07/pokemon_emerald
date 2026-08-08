	@ data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.inc:1034 BattleFrontier_BattleDomeBattleRoom_Text_FormerChampHasReturned
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2297B7
gText_Rom_2297B7: @ 0x082297B7
	.string "かえってきました!\nもと チャンピオン!\p$"
	.if (. - gText_Rom_2297B7) != 0x16
	.error "gText_Rom_2297B7 must retain its original byte length"
	.endif
