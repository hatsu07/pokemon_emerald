	@ data/text/match_call.inc:793 MatchCall_Text_Brendan7
	.globl gText_Rom_26B433
gText_Rom_26B433: @ 0x0826B433
	.string "ユウキ『だれ? {PLAYER}か?\pオレは いま\n119ばんどうろに きてるんだ!\pこのへんは でっかい かわが あるし\nいっつも あめが ふってるから\lずぶぬれに なっちまったよ!"
	.byte EOS
	.if (. - gText_Rom_26B433) > 0x57
	.error "gText_Rom_26B433 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26B433) < 0x57
	.space 0x57 - (. - gText_Rom_26B433)
	.endif
