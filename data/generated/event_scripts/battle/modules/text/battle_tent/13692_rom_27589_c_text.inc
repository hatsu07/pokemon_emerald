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
	@ analyzed canonical ROM range 0x082758DA-0x082758F7
	@ semantic recovery: script_data; byte-verified against linked ROM
EventText_JP_082758DA: @ 0x082758DA
	.string "バトルテント　シダケ　かいじょうの\nルールが　かかれてる!$"
