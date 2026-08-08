	@ data/maps/LilycoveCity/scripts.inc:500 LilycoveCity_Text_BrendanDefeat (+1 aliases)
	.globl gText_Rom_1E0A72
gText_Rom_1E0A72: @ 0x081E0A72
	.string "ふうん……\nかなり そだててるんだな\pちょっと くやしいな\nトレーナーとしては オレの ほうが\lセンパイ だったのに……$"
	.if (. - gText_Rom_1E0A72) > 0x3d
	.error "gText_Rom_1E0A72 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E0A72) < 0x3d
	.space 0x3d - (. - gText_Rom_1E0A72)
	.endif
