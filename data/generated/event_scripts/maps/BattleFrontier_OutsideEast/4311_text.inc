	@ data/maps/BattleFrontier_OutsideEast/scripts.inc:297 BattleFrontier_OutsideEast_Text_HeardPrettyGirlAtBattleArena
	.globl gText_Rom_222FD8
gText_Rom_222FD8: @ 0x08222FD8
	.string "バトルアリーナに めちゃくちゃ\nぷりてぃーな こが いるって きいたから\lここまで がんばって きたのにーっ!\pあせくさーくて あつくるしーい\nかくとうか ばっかり だったよ!{EOS}"
	.if (. - gText_Rom_222FD8) > 0x59
	.error "gText_Rom_222FD8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_222FD8) < 0x59
	.space 0x59 - (. - gText_Rom_222FD8)
	.endif
