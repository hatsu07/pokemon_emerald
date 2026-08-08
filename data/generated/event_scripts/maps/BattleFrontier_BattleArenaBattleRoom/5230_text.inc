	@ data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.inc:579 BattleFrontier_BattleArenaBattleRoom_Text_IgniteMyPassionForBattle
	.globl gText_Rom_230C03
gText_Rom_230C03: @ 0x08230C03
	.string "さあっ!\nアタシの とうしに ひを つけてねっ!"
	.byte EOS
	.if (. - gText_Rom_230C03) > 0x19
	.error "gText_Rom_230C03 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_230C03) < 0x19
	.space 0x19 - (. - gText_Rom_230C03)
	.endif
