	@ data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.inc:636 BattleFrontier_BattlePikeRoomNormal_Text_WillRestoreToFullHealth
	.globl gText_Rom_234C0B
gText_Rom_234C0B: @ 0x08234C0B
	.string "ようこそ……\nおきゃくさまは ラッキー ですね……\pポケモンを かいふくして さしあげます……"
	.byte EOS
	.if (. - gText_Rom_234C0B) > 0x30
	.error "gText_Rom_234C0B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_234C0B) < 0x30
	.space 0x30 - (. - gText_Rom_234C0B)
	.endif
