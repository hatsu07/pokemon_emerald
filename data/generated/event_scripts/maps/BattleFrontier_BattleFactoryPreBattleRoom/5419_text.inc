	@ data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.inc:648 BattleFrontier_BattleFactoryPreBattleRoom_Text_PreparedToFaceHead
	.globl gText_Rom_232973
gText_Rom_232973: @ 0x08232973
	.string "ファクトリーヘッドが およびです!\nかくごは よろしい ですか?"
	.byte EOS
	.if (. - gText_Rom_232973) > 0x21
	.error "gText_Rom_232973 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_232973) < 0x21
	.space 0x21 - (. - gText_Rom_232973)
	.endif
