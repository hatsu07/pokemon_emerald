	@ data/maps/BattleFrontier_Lounge3/scripts.inc:299 BattleFrontier_Lounge3_Text_ObtainedBattlePoints
	.globl gText_Rom_23848B
gText_Rom_23848B: @ 0x0823848B
	.string "{PLAYER}は バトルポイントを\n{STR_VAR_1}BP てにいれた!"
	.byte EOS
	.if (. - gText_Rom_23848B) > 0x19
	.error "gText_Rom_23848B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23848B) < 0x19
	.space 0x19 - (. - gText_Rom_23848B)
	.endif
