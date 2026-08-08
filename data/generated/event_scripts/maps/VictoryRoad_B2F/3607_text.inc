	@ data/maps/VictoryRoad_B2F/scripts.inc:58 VictoryRoad_B2F_Text_CarolinePostBattle
	.globl gText_Rom_219D37
gText_Rom_219D37: @ 0x08219D37
	.string "この チャンピオンロードも\nポケモンリーグも ながちょうば!\lたいりょくには ちゅうい してね!"
	.byte EOS
	.if (. - gText_Rom_219D37) > 0x31
	.error "gText_Rom_219D37 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_219D37) < 0x31
	.space 0x31 - (. - gText_Rom_219D37)
	.endif
