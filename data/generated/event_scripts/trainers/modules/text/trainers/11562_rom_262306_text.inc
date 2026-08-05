	@ data/text/trainers.inc:3416 Route134_Text_ReynaPostBattle
	.globl gText_Rom_262306
gText_Rom_262306: @ 0x08262306
	.string "ははっ あんたにゃ まけたよ!\pそこらへんの トレーナーでも たおして\nいちから しゅぎょう しなおすよ!$"
	.if (. - gText_Rom_262306) > 0x36
	.error "gText_Rom_262306 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_262306) < 0x36
	.space 0x36 - (. - gText_Rom_262306)
	.endif
