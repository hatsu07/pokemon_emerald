	@ data/maps/VictoryRoad_1F/scripts.inc:124 VictoryRoad_1F_Text_WallyEntranceDefeat (+2 aliases)
	.globl gText_Rom_219743
gText_Rom_219743: @ 0x08219743
	.string "うわぁ!\nやっぱり {PLAYER}さんは つよいよ!{EOS}"
	.if (. - gText_Rom_219743) > 0x16
	.error "gText_Rom_219743 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_219743) < 0x16
	.space 0x16 - (. - gText_Rom_219743)
	.endif

	@ data/maps/VictoryRoad_1F/scripts.inc:136 VictoryRoad_1F_Text_WallyPostBattle
	.globl gText_Rom_219759
gText_Rom_219759: @ 0x08219759
	.string "ミツル『…… こんかいも\n{PLAYER}さんに かてなかった けど\lいつか きっと おいついて……\pポケモンリーグに ちょうせん するんだ!"
	.byte EOS
	.if (. - gText_Rom_219759) > 0x42
	.error "gText_Rom_219759 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_219759) < 0x42
	.space 0x42 - (. - gText_Rom_219759)
	.endif
