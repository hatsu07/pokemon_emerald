	@ data/maps/MtPyre_1F/scripts.inc:28 MtPyre_1F_Text_TakeThisForYourOwnGood
	.globl gText_Rom_216165
gText_Rom_216165: @ 0x08216165
	.string "この おくりびやま には\nいろんな ものが さまよっておる……\pなにが おきるか わからん\nねんのため これを もっていきなされ{EOS}"
	.if (. - gText_Rom_216165) > 0x41
	.error "gText_Rom_216165 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_216165) < 0x41
	.space 0x41 - (. - gText_Rom_216165)
	.endif
	@ data/maps/MtPyre_1F/scripts.inc:34 MtPyre_1F_Text_ExplainCleanseTag
	.globl gText_Rom_2161A6
gText_Rom_2161A6: @ 0x082161A6
	.string "きよめのおふだ をな\nポケモンに もたせて おく\pすると やせいの ポケモンが\nあんまり とびだして こなくなるぞよ{EOS}"
	.if (. - gText_Rom_2161A6) > 0x3b
	.error "gText_Rom_2161A6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2161A6) < 0x3b
	.space 0x3b - (. - gText_Rom_2161A6)
	.endif
	@ data/maps/MtPyre_1F/scripts.inc:39 MtPyre_1F_Text_ComeToPayRespects
	.globl gText_Rom_2161E1
gText_Rom_2161E1: @ 0x082161E1
	.string "あなたも おはか まいりに きたの?\nずいぶんと ポケモン おもい なのね{EOS}"
	.if (. - gText_Rom_2161E1) > 0x26
	.error "gText_Rom_2161E1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2161E1) < 0x26
	.space 0x26 - (. - gText_Rom_2161E1)
	.endif
	@ data/maps/MtPyre_1F/scripts.inc:44 MtPyre_1F_Text_RestingPlaceOfZigzagoon
	.globl gText_Rom_216207
gText_Rom_216207: @ 0x08216207
	.string "ここには ぼくが たいせつに していた\nジグザグマが やすらかに ねむってる……{EOS}"
	.if (. - gText_Rom_216207) > 0x29
	.error "gText_Rom_216207 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_216207) < 0x29
	.space 0x29 - (. - gText_Rom_216207)
	.endif
	@ Embedded ROM bytes: file offset 0x216230, size 0xA8
	@ semanticized-mass: resolved embedded ROM pointers
	.byte 0x02, 0x2F, 0x43, 0x26, 0x08, 0x03, 0x39, 0x43, 0x26, 0x08, 0x05, 0x40, 0x62, 0x21, 0x08, 0x00
	.byte 0xA6, 0x07, 0x41, 0x18, 0x0F, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x02, 0x0F, 0x00
	.4byte gText_Rom_2162D8 @ ROM pointer 0x082162D8
	@ semanticized-mass: resolved embedded ROM pointers
	.byte 0x09, 0x02, 0x02, 0x0F, 0x00, 0x01, 0x63, 0x21, 0x08, 0x09, 0x02, 0x02, 0x5C, 0x00, 0x91, 0x00
	.byte 0x00, 0x00
	.4byte gText_Rom_21633A @ ROM pointer 0x0821633A
	.4byte gText_Rom_216362 @ ROM pointer 0x08216362
	.byte 0x0F, 0x00
	.4byte gText_Rom_216379 @ ROM pointer 0x08216379
	@ semanticized-mass: resolved embedded ROM pointers
	.byte 0x09, 0x06, 0x02, 0x5C, 0x04, 0x80, 0x02, 0x00, 0x00
	.4byte gText_Rom_2163A5 @ ROM pointer 0x082163A5
	.4byte gText_Rom_2163F7 @ ROM pointer 0x082163F7
	.4byte gText_Rom_216432 @ ROM pointer 0x08216432
	.byte 0x0F, 0x00, 0x00, 0x64, 0x21, 0x08, 0x09, 0x06, 0x02, 0x5C, 0x04, 0x80, 0x02, 0x00, 0x00
	.4byte gText_Rom_216479 @ ROM pointer 0x08216479
	.4byte gText_Rom_2164CB @ ROM pointer 0x082164CB
	.4byte gText_Rom_2164F9 @ ROM pointer 0x082164F9
	@ semanticized-mass: resolved embedded ROM pointers
	.byte 0x0F, 0x00
	.4byte gText_Rom_2164D8 @ ROM pointer 0x082164D8
	.byte 0x09, 0x06, 0x02, 0x5C, 0x00, 0x23, 0x00, 0x00, 0x00, 0x42, 0x65, 0x21, 0x08, 0x62, 0x65, 0x21
	.byte 0x08, 0x0F, 0x00, 0x6E, 0x65, 0x21, 0x08, 0x09, 0x06, 0x02, 0x5C, 0x00, 0x1F, 0x00, 0x00, 0x00
	.4byte gText_Rom_2165A3 @ ROM pointer 0x082165A3
	.4byte gText_Rom_2165B7 @ ROM pointer 0x082165B7
	.byte 0x0F, 0x00
	.4byte gText_Rom_2165C3 @ ROM pointer 0x082165C3
	.byte 0x09, 0x06, 0x02
