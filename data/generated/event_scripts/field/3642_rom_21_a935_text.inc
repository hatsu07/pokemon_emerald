	@ field-script:0x21A7F8 FieldScriptText_21A8F1
	.globl FieldScriptText_21A8F1
FieldScriptText_21A8F1: @ 0x0821A8F1
	.string "はつでんそうちに　ちかづいた　だけで\nねっきが　つたわってくる！\pはやく　とめたほうが　よさそうだ"
	.byte EOS
	.if (. - FieldScriptText_21A8F1) > 0x32
	.error "FieldScriptText_21A8F1 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_21A8F1) < 0x32
	.space 0x32 - (. - FieldScriptText_21A8F1)
	.endif
	@ field-script:0x21A802 FieldScriptText_21A923
	.globl FieldScriptText_21A923
FieldScriptText_21A923: @ 0x0821A923
	.string "はつでんそうちは　しずかに　なった"
	.byte EOS
	.if (. - FieldScriptText_21A923) > 0x12
	.error "FieldScriptText_21A923 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_21A923) < 0x12
	.space 0x12 - (. - FieldScriptText_21A923)
	.endif
	@ field-script:0x21A783 FieldScriptText_21A935
	.globl FieldScriptText_21A935
FieldScriptText_21A935: @ 0x0821A935
	.string "{0xFD}{0x01}は\nスイッチを　ふんだ！\p……ポチッとな！\p……　……　……\n……　……　……\pはつでんそうち　は\nとまった　ようだ"
	.byte EOS
	.if (. - FieldScriptText_21A935) > 0x3d
	.error "FieldScriptText_21A935 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_21A935) < 0x3d
	.space 0x3d - (. - FieldScriptText_21A935)
	.endif
	@ Embedded ROM bytes: file offset 0x21A972, size 0x2B
	@ semanticized-mass: resolved embedded ROM pointers
	.byte 0x03, 0x78, 0xA9, 0x21, 0x08, 0x00, 0x29, 0x9E, 0x08, 0x02, 0x00, 0x0F, 0x00, 0xDE, 0xA9, 0x21
	.byte 0x08, 0x09, 0x02, 0x02, 0x5C, 0x00, 0x42, 0x00, 0x00, 0x00
	.4byte AbandonedShip_Corridors_1F_Text_CharlieIntro @ ROM pointer 0x0821A99D
	.4byte AbandonedShip_Corridors_1F_Text_CharlieDefeat @ ROM pointer 0x0821A9B7
	.byte 0x0F, 0x00
	.4byte AbandonedShip_Corridors_1F_Text_CharliePostBattle
	.byte 0x09, 0x06, 0x02
