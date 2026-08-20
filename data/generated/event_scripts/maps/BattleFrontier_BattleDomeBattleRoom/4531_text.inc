	@ data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.inc:953 BattleFrontier_BattleDomeBattleRoom_Text_RefereeDecisionPleaseWait
	.globl gText_Rom_2295B8
gText_Rom_2295B8: @ 0x082295B8
	.string "たいへんな ことに なりました!\pダブルノックアウトの ばあい\nバトルトーナメントの ルールに のっとり\lはんていと なります\pしばらく おまちください……!{EOS}"
	.if (. - gText_Rom_2295B8) > 0x50
	.error "gText_Rom_2295B8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2295B8) < 0x50
	.space 0x50 - (. - gText_Rom_2295B8)
	.endif
