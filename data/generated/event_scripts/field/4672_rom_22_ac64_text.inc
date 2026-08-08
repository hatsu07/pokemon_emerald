	@ field-script:0x1F6823 FieldScriptText_22AC64
	.globl gText_Rom_22AC64
gText_Rom_22AC64: @ 0x0822AC64
	.string "ここでは　ポケモンたちが\nじぶんで　かんがえ　たたかいます\pじゅんすいな　やせいの　ときとは　ちがって\nひとと　くらしている　ポケモンは\lせいかくに　よって　どんな　こうどうを\lするかが　かわるのです$"
	.if (. - gText_Rom_22AC64) > 0x65
	.error "gText_Rom_22AC64 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22AC64) < 0x65
	.space 0x65 - (. - gText_Rom_22AC64)
	.endif
