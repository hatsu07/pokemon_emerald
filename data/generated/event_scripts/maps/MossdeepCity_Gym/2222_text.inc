	@ data/maps/MossdeepCity_Gym/scripts.inc:420 MossdeepCity_Gym_Text_SamanthaPostBattle
	.globl gText_Rom_20BB68
gText_Rom_20BB68: @ 0x0820BB68
	.string "あなたと ジムリーダーさまの しょうぶ……\nものすごく はげしい てんかい……\pけっかは……\nわたくしの くちからは いえない……!$"
	.if (. - gText_Rom_20BB68) > 0x43
	.error "gText_Rom_20BB68 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20BB68) < 0x43
	.space 0x43 - (. - gText_Rom_20BB68)
	.endif
