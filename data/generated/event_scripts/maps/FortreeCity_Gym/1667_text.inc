	@ data/maps/FortreeCity_Gym/scripts.inc:235 FortreeCity_Gym_Text_WinonaIntro (+1 aliases)
	.globl gText_Rom_2048B1
gText_Rom_2048B1: @ 0x082048B1
	.string "わたしは この ヒワマキ ジムで\nリーダーを している ナギ……\pとりポケモンと こころを かよわし\nいっしょに おおぞらを まい……\pどんな くるしい しょうぶも\nゆうがに かってみせる……\pさあ わたしと ポケモンが おりなす\nかれいな まいを みせましょう!$"
	.if (. - gText_Rom_2048B1) > 0x85
	.error "gText_Rom_2048B1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2048B1) < 0x85
	.space 0x85 - (. - gText_Rom_2048B1)
	.endif
