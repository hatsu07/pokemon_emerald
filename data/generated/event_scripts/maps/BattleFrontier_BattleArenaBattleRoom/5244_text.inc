	@ data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.inc:613 BattleFrontier_BattleArenaBattleRoom_Text_LetsGetThisStarted
	.globl gText_Rom_230D2A
gText_Rom_230D2A: @ 0x08230D2A
	.string "ほらっ しんぱん!\nさっさと はじめなさいっ!!"
	.byte EOS
	.if (. - gText_Rom_230D2A) > 0x19
	.error "gText_Rom_230D2A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_230D2A) < 0x19
	.space 0x19 - (. - gText_Rom_230D2A)
	.endif
