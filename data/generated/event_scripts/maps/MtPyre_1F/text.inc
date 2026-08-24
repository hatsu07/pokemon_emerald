	@ data/maps/MtPyre_1F/scripts.inc:28 MtPyre_1F_Text_TakeThisForYourOwnGood
	.globl MtPyre_1F_Text_TakeThisForYourOwnGood
MtPyre_1F_Text_TakeThisForYourOwnGood: @ 0x08216165
	.string "この おくりびやま には\nいろんな ものが さまよっておる……\pなにが おきるか わからん\nねんのため これを もっていきなされ{EOS}"
	.if (. - MtPyre_1F_Text_TakeThisForYourOwnGood) > 0x41
	.error "MtPyre_1F_Text_TakeThisForYourOwnGood may not grow beyond its original slot"
	.endif
	.if (. - MtPyre_1F_Text_TakeThisForYourOwnGood) < 0x41
	.space 0x41 - (. - MtPyre_1F_Text_TakeThisForYourOwnGood)
	.endif
	@ data/maps/MtPyre_1F/scripts.inc:34 MtPyre_1F_Text_ExplainCleanseTag
	.globl MtPyre_1F_Text_ExplainCleanseTag
MtPyre_1F_Text_ExplainCleanseTag: @ 0x082161A6
	.string "きよめのおふだ をな\nポケモンに もたせて おく\pすると やせいの ポケモンが\nあんまり とびだして こなくなるぞよ{EOS}"
	.if (. - MtPyre_1F_Text_ExplainCleanseTag) > 0x3b
	.error "MtPyre_1F_Text_ExplainCleanseTag may not grow beyond its original slot"
	.endif
	.if (. - MtPyre_1F_Text_ExplainCleanseTag) < 0x3b
	.space 0x3b - (. - MtPyre_1F_Text_ExplainCleanseTag)
	.endif
	@ data/maps/MtPyre_1F/scripts.inc:39 MtPyre_1F_Text_ComeToPayRespects
	.globl MtPyre_1F_Text_ComeToPayRespects
MtPyre_1F_Text_ComeToPayRespects: @ 0x082161E1
	.string "あなたも おはか まいりに きたの?\nずいぶんと ポケモン おもい なのね{EOS}"
	.if (. - MtPyre_1F_Text_ComeToPayRespects) > 0x26
	.error "MtPyre_1F_Text_ComeToPayRespects may not grow beyond its original slot"
	.endif
	.if (. - MtPyre_1F_Text_ComeToPayRespects) < 0x26
	.space 0x26 - (. - MtPyre_1F_Text_ComeToPayRespects)
	.endif
	@ data/maps/MtPyre_1F/scripts.inc:44 MtPyre_1F_Text_RestingPlaceOfZigzagoon
	.globl MtPyre_1F_Text_RestingPlaceOfZigzagoon
MtPyre_1F_Text_RestingPlaceOfZigzagoon: @ 0x08216207
	.string "ここには ぼくが たいせつに していた\nジグザグマが やすらかに ねむってる……{EOS}"
	.if (. - MtPyre_1F_Text_RestingPlaceOfZigzagoon) > 0x29
	.error "MtPyre_1F_Text_RestingPlaceOfZigzagoon may not grow beyond its original slot"
	.endif
	.if (. - MtPyre_1F_Text_RestingPlaceOfZigzagoon) < 0x29
	.space 0x29 - (. - MtPyre_1F_Text_RestingPlaceOfZigzagoon)
	.endif
	@ Embedded ROM bytes: file offset 0x216230, size 0xA8
	@ semanticized-mass: resolved embedded ROM pointers
	.byte 0x02, 0x2F, 0x43, 0x26, 0x08, 0x03, 0x39, 0x43, 0x26, 0x08, 0x05, 0x40, 0x62, 0x21, 0x08, 0x00
	.byte 0xA6, 0x07, 0x41, 0x18, 0x0F, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x02, 0x0F, 0x00
	.4byte MtPyre_2F_Text_MemoriesOfSkitty @ ROM pointer 0x082162D8
	@ semanticized-mass: resolved embedded ROM pointers
	.byte 0x09, 0x02, 0x02, 0x0F, 0x00
	.4byte MtPyre_2F_Text_TumbledFromFloorAbove
	.byte 0x09, 0x02, 0x02, 0x5C, 0x00, 0x91, 0x00
	.byte 0x00, 0x00
	.4byte MtPyre_2F_Text_MarkIntro @ ROM pointer 0x0821633A
	.4byte MtPyre_2F_Text_MarkDefeat @ ROM pointer 0x08216362
	.byte 0x0F, 0x00
	.4byte MtPyre_2F_Text_MarkPostBattle @ ROM pointer 0x08216379
	@ semanticized-mass: resolved embedded ROM pointers
	.byte 0x09, 0x06, 0x02, 0x5C, 0x04, 0x80, 0x02, 0x00, 0x00
	.4byte MtPyre_2F_Text_LukeIntro @ ROM pointer 0x082163A5
	.4byte MtPyre_2F_Text_LukeDefeat @ ROM pointer 0x082163F7
	.4byte MtPyre_2F_Text_LukeNotEnoughMons @ ROM pointer 0x08216432
	.byte 0x0F, 0x00, 0x00, 0x64, 0x21, 0x08, 0x09, 0x06, 0x02, 0x5C, 0x04, 0x80, 0x02, 0x00, 0x00
	.4byte MtPyre_2F_Text_DezIntro @ ROM pointer 0x08216479
	.4byte MtPyre_2F_Text_DezDefeat @ ROM pointer 0x082164CB
	.4byte MtPyre_2F_Text_DezNotEnoughMons @ ROM pointer 0x082164F9
	@ semanticized-mass: resolved embedded ROM pointers
	.byte 0x0F, 0x00
	.4byte MtPyre_2F_Text_DezPostBattle @ ROM pointer 0x082164D8
	.byte 0x09, 0x06, 0x02, 0x5C, 0x00, 0x23, 0x00, 0x00, 0x00, 0x42, 0x65, 0x21, 0x08, 0x62, 0x65, 0x21
	.byte 0x08, 0x0F, 0x00
	.4byte MtPyre_2F_Text_LeahPostBattle
	.byte 0x09, 0x06, 0x02, 0x5C, 0x00, 0x1F, 0x00, 0x00, 0x00
	.4byte MtPyre_2F_Text_ZanderIntro @ ROM pointer 0x082165A3
	.4byte MtPyre_2F_Text_ZanderDefeat @ ROM pointer 0x082165B7
	.byte 0x0F, 0x00
	.4byte MtPyre_2F_Text_ZanderPostBattle @ ROM pointer 0x082165C3
	.byte 0x09, 0x06, 0x02
