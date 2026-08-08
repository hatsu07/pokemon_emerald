	@ data/maps/Route110/scripts.inc:786 Route110_Text_BrendanLetsBattle
	.globl gText_Rom_1E98F4
gText_Rom_1E98F4: @ 0x081E98F4
	.string "ユウキ『{PLAYER}か\nこんなところに いたんだ\lちょうしは どう?\pポケモン そだててるか どうか\nオレが たしかめて やるよ$"
	.if (. - gText_Rom_1E98F4) > 0x3d
	.error "gText_Rom_1E98F4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E98F4) < 0x3d
	.space 0x3d - (. - gText_Rom_1E98F4)
	.endif
