	@ field-script:0x2590E6 FieldScriptText_258B67
	.globl gText_Rom_258B67
gText_Rom_258B67: @ 0x08258B67
	.string "おいしい　ポロックを　つくって\nわたしの　ポケモンを\lもっと　もっと　かわいく　するのー"
	.byte EOS
	.if (. - gText_Rom_258B67) > 0x2d
	.error "gText_Rom_258B67 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_258B67) < 0x2d
	.space 0x2d - (. - gText_Rom_258B67)
	.endif
