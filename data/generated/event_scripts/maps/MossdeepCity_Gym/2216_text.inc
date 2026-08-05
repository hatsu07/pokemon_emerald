	@ data/maps/MossdeepCity_Gym/scripts.inc:411 MossdeepCity_Gym_Text_HannahPostBattle
	.globl gText_Rom_20BAEB
gText_Rom_20BAEB: @ 0x0820BAEB
	.string "まけたから って クヨクヨ しないわ\nもっと しゅぎょう すれば いいんだもの!\pまえむきな ところが アタシの とりえ!$"
	.if (. - gText_Rom_20BAEB) > 0x3e
	.error "gText_Rom_20BAEB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20BAEB) < 0x3e
	.space 0x3e - (. - gText_Rom_20BAEB)
	.endif
