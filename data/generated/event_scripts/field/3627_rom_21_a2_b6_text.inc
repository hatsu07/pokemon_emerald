	@ field-script:0x21A28A FieldScriptText_21A2B6
	.globl gText_Rom_21A2B6
gText_Rom_21A2B6: @ 0x0821A2B6
	.string "このあたりは　からだが　ひえきって\nしゅぎょう　するのも　ままならぬ……\pだが　きあいが　あれば　だいじょうぶッ！\pおぬしも　この　きあいのハチマキで\nさむさに　たえてみせるのだッ！"
	.byte EOS
	.if (. - gText_Rom_21A2B6) > 0x5c
	.error "gText_Rom_21A2B6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21A2B6) < 0x5c
	.space 0x5c - (. - gText_Rom_21A2B6)
	.endif
