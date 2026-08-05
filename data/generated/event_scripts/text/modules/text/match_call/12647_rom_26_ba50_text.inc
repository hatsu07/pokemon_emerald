	@ data/text/match_call.inc:844 MatchCall_Text_Scott2
	.globl gText_Rom_26BA50
gText_Rom_26BA50: @ 0x0826BA50
	.string "エニシダ『わたしは いま\n119ばん どうろに きてるんだけど\lたくさんの トレーナーが いるねえ!\pでも このあたりは せのたかい くさが\nいっぱい はえてるから\pはんズボンで あるきまわると\nあしが くすぐったくて こまるよ!"
	.byte EOS
	.if (. - gText_Rom_26BA50) > 0x74
	.error "gText_Rom_26BA50 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26BA50) < 0x74
	.space 0x74 - (. - gText_Rom_26BA50)
	.endif
