	@ data/maps/BattleFrontier_Lounge6/scripts.inc:38 BattleFrontier_Lounge6_Text_WellThatsFineToo
	.globl gText_Rom_23972E
gText_Rom_23972E: @ 0x0823972E
	.string "あ やめますか!\nべつに いいですよ\lまた こんど きてくださいー"
	.byte EOS
	.if (. - gText_Rom_23972E) > 0x22
	.error "gText_Rom_23972E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23972E) < 0x22
	.space 0x22 - (. - gText_Rom_23972E)
	.endif
