	@ data/maps/BattleFrontier_BattleDomeLobby/scripts.inc:664 BattleFrontier_BattleDomeLobby_Text_ExplainMatchupRules
	.globl gText_Rom_227D84
gText_Rom_227D84: @ 0x08227D84
	.string "トーナメントの くみあわせは\nトレーナーが つれている\lポケモンの ちからを みて つくられます\pさいしょから つよい トレーナーどうしは\nあたらないように なっています{EOS}"
	.if (. - gText_Rom_227D84) > 0x56
	.error "gText_Rom_227D84 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_227D84) < 0x56
	.space 0x56 - (. - gText_Rom_227D84)
	.endif
