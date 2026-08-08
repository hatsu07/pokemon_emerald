	@ field-script:0x21E02C FieldScriptText_21E2F0
	.globl gText_Rom_21E2F0
gText_Rom_21E2F0: @ 0x0821E2F0
	.string "ふなたびに　あきちゃって\nきゃくしつで　ポケモンで　しょうぶを\lしたがっている　トレーナーも　いるぞ！"
	.byte EOS
	.if (. - gText_Rom_21E2F0) > 0x34
	.error "gText_Rom_21E2F0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21E2F0) < 0x34
	.space 0x34 - (. - gText_Rom_21E2F0)
	.endif
