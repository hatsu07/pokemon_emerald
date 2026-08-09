	@ data/text/battle_tent.inc:367 SlateportCity_BattleTentLobby_Text_ExplainMonRules
	.globl gText_Rom_27589C
gText_Rom_27589C: @ 0x0827589C
	.string "バトルテント カイナの ポケモンは\nすべて レンタルポケモン です\pレンタルポケモンの レベルは\nすべて 30に なります$"
	.if (. - gText_Rom_27589C) > 0x3e
	.error "gText_Rom_27589C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_27589C) < 0x3e
	.space 0x3e - (. - gText_Rom_27589C)
	.endif
	@ Replaced baserom.gba range: offset=0x2758DA, size=0x1E
	@ semanticized-mass: charmap string (30 bytes including EOS)
	.string "バトルテント　シダケ　かいじょうの\nル_ルが　かかれてる！"
	.byte EOS
