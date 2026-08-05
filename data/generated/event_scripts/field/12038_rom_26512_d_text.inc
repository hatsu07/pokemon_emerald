	@ field-script:0x26498B FieldScriptText_26512D
	.globl gText_Rom_26512D
gText_Rom_26512D: @ 0x0826512D
	.string "わーっ！　すっごく　よろこんでるよー！\pそれに　{0xFD}{0x02}の　{0xFD}{0x03}さに\nみがきが　かかった　みたい！\lどうも　ありがとー！$"
	.if (. - gText_Rom_26512D) > 0x3b
	.error "gText_Rom_26512D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26512D) < 0x3b
	.space 0x3b - (. - gText_Rom_26512D)
	.endif
