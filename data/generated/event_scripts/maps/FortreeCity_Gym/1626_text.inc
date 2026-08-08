	@ data/maps/FortreeCity_Gym/scripts.inc:137 FortreeCity_Gym_Text_GymGuideAdvice
	.globl gText_Rom_204578
gText_Rom_204578: @ 0x08204578
	.string "げんき しとぉや!!\nチャンピオンを めざす {PLAYER}!!\pヒワマキシティ ジムの リーダー ナギは\nひこうタイプ ポケモンの つかいてだ!\pこの かいてんとびら だらけの\nジムの おくで\pかのじょは あらたな チャレンジャーが\nはばたこうと するのを まっている!\pじゃ きばってこォー!!$"
	.if (. - gText_Rom_204578) > 0x91
	.error "gText_Rom_204578 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_204578) < 0x91
	.space 0x91 - (. - gText_Rom_204578)
	.endif
