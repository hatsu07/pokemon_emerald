	@ data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.inc:321 BattleFrontier_BattlePikeThreePathRoom_Text_FindingItDifficultToChoose
	.globl gText_Rom_234201
gText_Rom_234201: @ 0x08234201
	.string "…… おきゃくさま……\pしつれいですが どのみちに すすむか\nまよって いらっしゃるの ですか……?"
	.byte EOS
	.if (. - gText_Rom_234201) > 0x33
	.error "gText_Rom_234201 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_234201) < 0x33
	.space 0x33 - (. - gText_Rom_234201)
	.endif
