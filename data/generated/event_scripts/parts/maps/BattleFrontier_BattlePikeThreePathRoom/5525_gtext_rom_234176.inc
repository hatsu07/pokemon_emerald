	@ data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.inc:304 BattleFrontier_BattlePikeThreePathRoom_Text_AwaitingReturnSaveBeforeResume
	.globl gText_Rom_234176
gText_Rom_234176: @ 0x08234176
	.string "おまちして おりました……\pバトルゲームを さいかいする まえに\nレポートを かきましょう……"
	.byte EOS
	.if (. - gText_Rom_234176) > 0x30
	.error "gText_Rom_234176 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_234176) < 0x30
	.space 0x30 - (. - gText_Rom_234176)
	.endif
