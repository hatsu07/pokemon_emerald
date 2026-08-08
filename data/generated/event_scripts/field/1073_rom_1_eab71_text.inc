	@ field-script:0x1EA63A FieldScriptText_1EAB71
	.globl gText_Rom_1EAB71
gText_Rom_1EAB71: @ 0x081EAB71
	.string "カチヌキいっかに　いどんだけれど\n4にん　つづけての　ポケモンしょうぶは\lきびしいよな……　ボロまけ　したよ$"
	.if (. - gText_Rom_1EAB71) > 0x37
	.error "gText_Rom_1EAB71 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1EAB71) < 0x37
	.space 0x37 - (. - gText_Rom_1EAB71)
	.endif
