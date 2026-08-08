	@ data/maps/BattleFrontier_OutsideWest/scripts.inc:357 BattleFrontier_OutsideWest_Text_BigGuySaidIllLendYouMons
	.globl gText_Rom_21F146
gText_Rom_21F146: @ 0x0821F146
	.string "だ だいじょうぶ だよ!\pきっと……\pなんだか おっかない おっさん だったけど\n「ポケモン かして やるぜ!」 って\lいってた じゃん か……"
	.byte EOS
	.if (. - gText_Rom_21F146) > 0x49
	.error "gText_Rom_21F146 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21F146) < 0x49
	.space 0x49 - (. - gText_Rom_21F146)
	.endif
