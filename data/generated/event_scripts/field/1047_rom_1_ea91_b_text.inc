	@ field-script:0x1EA472 FieldScriptText_1EA91B
	.globl gText_Rom_1EA91B
gText_Rom_1EA91B: @ 0x081EA91B
	.string "きみ！　たびの　とちゅう　だろうけれど\pどうだ？　ここは　ひとつ\nわたしたち　かぞく　4にんと\lポケモン　しょうぶを　してみないか？{EOS}"
	.if (. - gText_Rom_1EA91B) > 0x43
	.error "gText_Rom_1EA91B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1EA91B) < 0x43
	.space 0x43 - (. - gText_Rom_1EA91B)
	.endif
