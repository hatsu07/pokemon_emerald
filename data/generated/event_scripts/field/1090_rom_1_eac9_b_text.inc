	@ field-script:0x1EA664 FieldScriptText_1EAC9B
	.globl gText_Rom_1EAC9B
gText_Rom_1EAC9B: @ 0x081EAC9B
	.string "この　あたりに　すなで　できた\nとうが　たっている　はず　なんだが\pどうしたわけか\nみえるときと　みえないときが　あるのだ\pだから　わたしは　それを\nげんえいのとう　と　よんでいる……{EOS}"
	.if (. - gText_Rom_1EAC9B) > 0x5d
	.error "gText_Rom_1EAC9B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1EAC9B) < 0x5d
	.space 0x5d - (. - gText_Rom_1EAC9B)
	.endif
