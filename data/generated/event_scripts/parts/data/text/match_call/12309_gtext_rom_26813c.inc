	@ data/text/match_call.inc:364 MatchCall_PersonalizedText51
	.globl gText_Rom_26813C
gText_Rom_26813C: @ 0x0826813C
	.string "{STR_VAR_1}だ\nポケモン ちゃんと そだててるか?\pここは くうきも きれいだし\nポケモンを そだてるには\lぜっこうの かんきょう なんだよな\pきみも ポケモンを そだてる ことに\nせんねん する ときは\l{STR_VAR_2}に くると いいぞ\lじゃあ またな$"
	.if (. - gText_Rom_26813C) > 0x77
	.error "gText_Rom_26813C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26813C) < 0x77
	.space 0x77 - (. - gText_Rom_26813C)
	.endif
