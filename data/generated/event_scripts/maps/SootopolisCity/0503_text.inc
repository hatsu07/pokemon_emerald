	@ data/maps/SootopolisCity/scripts.inc:1393 SootopolisCity_Text_GiantPokemonSuddenlyAppeared
	.globl gText_Rom_1E2C9A
gText_Rom_1E2C9A: @ 0x081E2C9A
	.string "おっきな ポケモンが とつぜん\nまちの まんなかに あらわれたんだ!\lしかも みたことない やつが 2ひきも!\pあの 2ひき……\nどうして ぶつかり あってるの?\lポケモンどうし なかよく できないの?$"
	.if (. - gText_Rom_1E2C9A) > 0x66
	.error "gText_Rom_1E2C9A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E2C9A) < 0x66
	.space 0x66 - (. - gText_Rom_1E2C9A)
	.endif
