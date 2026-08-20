	@ data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.inc:1005 BattleFrontier_BattleDomeBattleRoom_Text_WinHereAdvancesToFinal
	.globl gText_Rom_229724
gText_Rom_229724: @ 0x08229724
	.string "この しあいに かてば\nいよいよ けっしょうせん です!\p{EOS}"
	.if (. - gText_Rom_229724) > 0x1e
	.error "gText_Rom_229724 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_229724) < 0x1e
	.space 0x1e - (. - gText_Rom_229724)
	.endif
