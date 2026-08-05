	@ data/maps/VictoryRoad_B2F/scripts.inc:40 VictoryRoad_B2F_Text_VitoPostBattle
	.globl gText_Rom_219C75
gText_Rom_219C75: @ 0x08219C75
	.string "かぞくの だれよりも つよかった おれ……\nいままで だれにも まけなかった おれ……\pだけど じしん なくしちゃったよ\nいえに かえろうかなあ"
	.byte EOS
	.if (. - gText_Rom_219C75) > 0x49
	.error "gText_Rom_219C75 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_219C75) < 0x49
	.space 0x49 - (. - gText_Rom_219C75)
	.endif
