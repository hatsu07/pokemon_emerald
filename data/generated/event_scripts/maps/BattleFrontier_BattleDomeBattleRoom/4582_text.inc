	@ data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.inc:1087 BattleFrontier_BattleDomeBattleRoom_Text_WinnerIsTucker
	.globl gText_Rom_2299B0
gText_Rom_2299B0: @ 0x082299B0
	.string "ドームスーパースター!!\nヒースの しょうりです!\pおめでとうーーーー! ヒース!!{EOS}"
	.if (. - gText_Rom_2299B0) > 0x2b
	.error "gText_Rom_2299B0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2299B0) < 0x2b
	.space 0x2b - (. - gText_Rom_2299B0)
	.endif
