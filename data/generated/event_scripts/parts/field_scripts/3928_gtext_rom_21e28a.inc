	@ field-script:0x21DFAA FieldScriptText_21E28A
	.globl gText_Rom_21E28A
gText_Rom_21E28A: @ 0x0821E28A
	.string "とうちゃくまで　まだまだ　だな\pじぶんの　へやに　もどって　やすんでいなよ\nたしか　きみの　へやは\l2ごうしつ　だったな\pあの　へやの　ベッドは\nふかふか　していて　きもちいいぞ！"
	.byte EOS
	.if (. - gText_Rom_21E28A) > 0x5b
	.error "gText_Rom_21E28A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21E28A) < 0x5b
	.space 0x5b - (. - gText_Rom_21E28A)
	.endif
