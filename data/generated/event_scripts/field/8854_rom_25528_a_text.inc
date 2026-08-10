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
	@ analyzed canonical ROM range 0x082552B1-0x082552C4
	@ semantic recovery: script_data; byte-verified against linked ROM
EventText_JP_082552B1: @ 0x082552B1
	.string "ところで…\nまだ　でんせつ　ききたい?$"
