	@ field-script:0x26497A FieldScriptText_2650FD
	.globl gText_Rom_2650FD
gText_Rom_2650FD: @ 0x082650FD
	.string "……なんか　ぜんぜん\nかわってない　ような……\pうーん……\pまあ　いっか！\nどうも　ありがとー$"
	.if (. - gText_Rom_2650FD) > 0x30
	.error "gText_Rom_2650FD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2650FD) < 0x30
	.space 0x30 - (. - gText_Rom_2650FD)
	.endif
