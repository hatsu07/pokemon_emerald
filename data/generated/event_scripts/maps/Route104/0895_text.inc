	@ data/maps/Route104/scripts.inc:1116 Route104_Text_MayPostBattle
	.globl gText_Rom_1E7F9B
gText_Rom_1E7F9B: @ 0x081E7F9B
	.string "ハルカ『けっこう ポケモンの あつかい\nうまく なってきた みたいね!\pでも たたかわせる だけじゃなくて\nそこの ハギろうじん みたいに\lポケモンと なかよくする っていうのも\lだいじなこと なのよ!$"
	.if (. - gText_Rom_1E7F9B) > 0x66
	.error "gText_Rom_1E7F9B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E7F9B) < 0x66
	.space 0x66 - (. - gText_Rom_1E7F9B)
	.endif
