	@ data/maps/VictoryRoad_1F/scripts.inc:145 VictoryRoad_1F_Text_EdgarPostBattle
	.globl gText_Rom_2197CA
gText_Rom_2197CA: @ 0x082197CA
	.string "ここまで きたなら\nいきおいで チャンピオンに なれよ!\lきみなら できるさ!"
	.byte EOS
	.if (. - gText_Rom_2197CA) > 0x28
	.error "gText_Rom_2197CA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2197CA) < 0x28
	.space 0x28 - (. - gText_Rom_2197CA)
	.endif
