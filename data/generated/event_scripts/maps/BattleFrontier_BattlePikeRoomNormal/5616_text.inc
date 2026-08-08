	@ data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.inc:771 BattleFrontier_BattlePikeRoomNormal_Text_ReceivedLuckSymbol
	.globl gText_Rom_234F98
gText_Rom_234F98: @ 0x08234F98
	.string "フロンティアパスに\nラックシンボルが きざまれた!"
	.byte EOS
	.if (. - gText_Rom_234F98) > 0x1a
	.error "gText_Rom_234F98 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_234F98) < 0x1a
	.space 0x1a - (. - gText_Rom_234F98)
	.endif
