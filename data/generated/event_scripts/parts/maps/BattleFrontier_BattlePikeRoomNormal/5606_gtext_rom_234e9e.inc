	@ data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.inc:745 BattleFrontier_BattlePikeRoomNormal_Text_RestoreToFullHealth
	.globl gText_Rom_234E9E
gText_Rom_234E9E: @ 0x08234E9E
	.string "……すばらしい……\pおきゃくさまの しょうりを たたえ\nポケモンを かいふくして さしあげます……"
	.byte EOS
	.if (. - gText_Rom_234E9E) > 0x32
	.error "gText_Rom_234E9E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_234E9E) < 0x32
	.space 0x32 - (. - gText_Rom_234E9E)
	.endif
