	@ data/maps/VictoryRoad_1F/scripts.inc:127 VictoryRoad_1F_Text_WallyPostEntranceBattle
	.globl gText_Rom_2196CA
gText_Rom_2196CA: @ 0x082196CA
	.string "ミツル『…… こんかいは\n{PLAYER}さんに かてなかった けど\lいつか きっと おいついて みせるからね!{EOS}"
	.if (. - gText_Rom_2196CA) > 0x33
	.error "gText_Rom_2196CA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2196CA) < 0x33
	.space 0x33 - (. - gText_Rom_2196CA)
	.endif
