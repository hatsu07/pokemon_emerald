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
sAnalyzedEventData_082758DA: @ 0x082758DA
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0x96, 0x64, 0x79, 0x63, 0x7E, 0x64, 0x00, 0x5C, 0x91, 0x59, 0x00, 0x06, 0x02, 0x3D, 0x36, 0x03
	.byte 0x19, 0xFE, 0x79, 0xAE, 0x79, 0x37, 0x00, 0x06, 0x06, 0x2A, 0x13, 0x29, 0xAB, 0xFF
