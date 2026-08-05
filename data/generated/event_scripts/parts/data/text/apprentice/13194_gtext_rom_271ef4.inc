	@ data/text/apprentice.inc:709 gText_ApprenticeWhichMove6
	.globl gText_Rom_271EF4
gText_Rom_271EF4: @ 0x08271EF4
	.string "おおっ ラッキー!\n{PLAYER}さんに あえましたー!\lさっそく ききたいことが あるのー!\pジャーン では\nほんじつの そうだんでーす!\pわたしの {STR_VAR_1}には\n{STR_VAR_2}と {STR_VAR_3}\lおにあいの わざは さあどっち?$"
	.if (. - gText_Rom_271EF4) > 0x64
	.error "gText_Rom_271EF4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_271EF4) < 0x64
	.space 0x64 - (. - gText_Rom_271EF4)
	.endif
