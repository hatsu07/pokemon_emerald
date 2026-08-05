	@ data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.inc:1047 BattleFrontier_BattleDomeBattleRoom_Text_WillFormerChampRegainGlory
	.globl gText_Rom_229803
gText_Rom_229803: @ 0x08229803
	.string "みごとに ふっかつ ゆうしょう なるか!?\p$"
	.if (. - gText_Rom_229803) > 0x17
	.error "gText_Rom_229803 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_229803) < 0x17
	.space 0x17 - (. - gText_Rom_229803)
	.endif
