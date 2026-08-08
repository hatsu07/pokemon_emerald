	@ data/maps/BattleFrontier_OutsideWest/scripts.inc:351 BattleFrontier_OutsideWest_Text_OnlyToughTrainersBroughtHere
	.globl gText_Rom_21F0A7
gText_Rom_21F0A7: @ 0x0821F0A7
	.string "ここには だれでも\nこられるって わけじゃ ないんだぜ\pつよさを みとめられた トレーナーが\nつれてきて もらえる ところなんだ!\pだから…… バトルフロンティアの ことを\nしらない トレーナーも おおいんだ"
	.byte EOS
	.if (. - gText_Rom_21F0A7) > 0x69
	.error "gText_Rom_21F0A7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21F0A7) < 0x69
	.space 0x69 - (. - gText_Rom_21F0A7)
	.endif
