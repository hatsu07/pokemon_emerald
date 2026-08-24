	@ data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.inc:624 BattleFrontier_BattleFactoryPreBattleRoom_Text_SavingDataPleaseWait
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_23288B
gText_Rom_23288B: @ 0x0823288B
	.string "ただいま レポートを かいて います……\nしょうしょう おまちください"
	.byte EOS
	.if (. - gText_Rom_23288B) != 0x24
	.error "gText_Rom_23288B must retain its original byte length"
	.endif
	.globl gText_Rom_2328A0
	.set gText_Rom_2328A0, gText_Rom_23288B + 0x15
	@ data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.inc:364 BattleFrontier_BattleDomePreBattleRoom_Text_RecordLastMatch (+2 aliases)
	.globl gText_Rom_2328AF
gText_Rom_2328AF: @ 0x082328AF
	.string "さきほどの たたかいを\nフロンティアパスに きろく しますか?"
	.byte EOS
	.if (. - gText_Rom_2328AF) > 0x20
	.error "gText_Rom_2328AF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2328AF) < 0x20
	.space 0x20 - (. - gText_Rom_2328AF)
	.endif
