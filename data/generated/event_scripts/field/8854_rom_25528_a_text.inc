	@ field-script:0x256317 FieldScriptText_25528A
	.globl gText_Rom_25528A
gText_Rom_25528A: @ 0x0825528A
	.string "……きみ　トレーナー？\pだったら　なにか　でんせつっぽい　はなし\nきかせてよ"
	.byte EOS
	.if (. - gText_Rom_25528A) > 0x27
	.error "gText_Rom_25528A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25528A) < 0x27
	.space 0x27 - (. - gText_Rom_25528A)
	.endif
	@ Original ROM bytes: 0x2552B1-0x2552C4 (0x14 bytes)
	@ semanticized-mass: charmap string (20 bytes including EOS)
	.string "ところで…\nまだ　でんせつ　ききたい？"
	.byte EOS
