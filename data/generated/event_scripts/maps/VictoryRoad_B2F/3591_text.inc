	@ data/maps/VictoryRoad_B2F/scripts.inc:34 VictoryRoad_B2F_Text_VitoIntro (+1 aliases)
	.globl gText_Rom_219C2B
gText_Rom_219C2B: @ 0x08219C2B
	.string "かぞく ぜんいんで\nポケモンの しゅぎょうを してたんだ!\lだれにも まけないぜ!"
	.byte EOS
	.if (. - gText_Rom_219C2B) > 0x2a
	.error "gText_Rom_219C2B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_219C2B) < 0x2a
	.space 0x2a - (. - gText_Rom_219C2B)
	.endif
