	@ data/text/match_call.inc:757 MatchCall_Text_May10
	.globl gText_Rom_26AFB3
gText_Rom_26AFB3: @ 0x0826AFB3
	.string "ハルカ『あっ {PLAYER}{KUN}!\pクスノキかんちょうが せんすいていで\nかいていどうくつを はっけんした って\lニュースで やってたけど みた?"
	.byte EOS
	.if (. - gText_Rom_26AFB3) > 0x45
	.error "gText_Rom_26AFB3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26AFB3) < 0x45
	.space 0x45 - (. - gText_Rom_26AFB3)
	.endif
