	@ data/maps/MossdeepCity/scripts.inc:327 MossdeepCity_Text_MossdeepTargetedByMagma
	.globl gText_Rom_1E193A
gText_Rom_1E193A: @ 0x081E193A
	.string "ふなのりの なかまから きいたんだけど\nミナモに すみついていた アクアだん\lだれかが やっつけたんだってな!\pでも こっちの トクサネは\nマグマだんに ねらわれてるんだよ……\pあいつらが なにをするき なのかは\nうちゅうセンターに いけば わかるさ$"
	.if (. - gText_Rom_1E193A) > 0x7e
	.error "gText_Rom_1E193A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E193A) < 0x7e
	.space 0x7e - (. - gText_Rom_1E193A)
	.endif
